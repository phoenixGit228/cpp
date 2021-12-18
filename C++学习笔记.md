# C++学习笔记

## 第三章 处理数据

###  3.1 基本类型

分为两组：整型和浮点型

####  3.1.1 整型

从存储时使用内存量及有无符号区分,从最小到最大依次是：
`bool --> char --> signed char --> unsigned char --> short --> unsigned short --> int --> unsigned int  long --> unsigned long --> long long(C++11 新增) --> unsigned long long(C++11新增)`

- wcha_t 在该序列中的位置取决于实现
    使用 `wcin` 和 `wcout` 处理

- C++11新增类型char16_t和char_32_t

#### 3.1.2 bool类型

`true` - 任何非零值；
`false` - 0

#### 3.1.3 const限定符

`const type name = value;` 声明name时应进行初始化,如果在声明时没有提值, 该值是不确定的,且不能修改;
相比 #define具有的优点：

1. 能够明确指定类型；
2. 可以使用作用域规则限定在特定函数体内；
3. 可以用于更复杂的类型,如数组和结构

#### 3.1.4 浮点数

| 类型        | 有效位数           |
| :---------- | :----------------- |
| float       | 32位               |
| double      | 至少48位,通常64位 |
| long double | 80,96或者128位     |

### 3.2  类型转换

#### 3.2.1 潜在问题

| 转换                                     | 潜在问题                             |
| :--------------------------------------- | :----------------------------------- |
| 将较大的浮点数转换为较小的浮点类型       | 精度（有效位数）降低,值可能超出范围 |
| 浮点数转换为整型                         | 小数部分丢失,原来值可能超出目标范围 |
| 较大的整型转为较小的整型 如long转为short | 值可能超出范围,通常只复制右边字节   |

#### 3.2.2 以{}方式初始化进行转换

类型转换要求更严格,列表初始化不允许缩窄（narrowing）
type 变量名 {value}
举例如下：

```c++
    const int code = 66;
    int x = 66;
    char c1 {31325};  // narrowing, not allowed
    char c2 = {66}; // allowed because char can hold 66
    char c3 {code}; // ditto
    char c4 = {x};  // not allowed, x is not constant
    x = 31325;
    char c5 = x;    // allowed by this form of initialization
```

#### 3.2.3 表达式中转换

- 一些类型出现时便会自动转换。 bool、char、unsigned char、signed char 和short转换为int。`整型提升`保证运算速度
- 不同类型进行算术运算,较小类型转换为较大类型,保证精度。C++编译器通过校验表选择最小能同时保存各操作数的类型。`long double ----> double ----> float ----> int ----> unsigned ----> signed`

#### 3.2.4 强制类型转换

强制类型转换不会改变变量本身,而是创建一个新的、指定类型的值,可以在表达式中使用这个值。格式有两种：

- `(类型名) 变量名/值`  // 转换变量或值到指定类型,该格式来自C语言
- `类型名 (变量名/值)`  // 转换变量或值到指定类型,该格式纯粹的C++,新格式想法是要让强制类型转换就像是函数调用。
- `static_cast-->type--> (value)` // 比传统强制类型转换更为严格

#### 3.2.5 C++11中的auto声明

初始化声明中,如果使用关键字auto,而不指定变量的类型,编译器将把变量的类型设置成与初始值相同。

```c++
    x = 0.0; // ok, x is double because 0.0 is double
    double y = 0; // ok, o automatically converted to 0.0
    z = 0; //oops, z is int because 0 is int
```

`显式地声明类型时,将变量初始化0（而不是0.0）不会导致任何问题,但采用自动类型推断时,这却会导致问题。`

## 第四章 复合类型

### 4.1 数组

数组声明应指出以下三点：

1. 存储在每个元素中的值的类型
2. 数组名
3. 数组中的元素数。

声明数组的通用格式如下

- `typeName arrayName [arraysize];` arraysize指定元素数目,必须是整型常数或const值也可以是显式的表达式。
- `new`运算符可以避开这种限制。

```c++
    short months[12];   //creats array of 12 short
```

#### 4.1.1 数组初始化

- 只有在定义数组时,才能使用初始化,以后就不能使用了,也不能将一个数组赋给另一个数组。

```c++
    int cards[4] = {3,6,8,10};    // okay
    int hand[4];                  // okay
    hand[4] = {5,6,7,8};          // not allowed,没有数据类型
    hand = cards;                 // not allowed
```

- 如果只对数组的一部分初始化,则编译器将把其他元素设置为0

```c++
    long totals[500] = {0};   //数组元素全部为0
    long term[100] = {1};     // 数组第一个元素为1,其余为0
```

- 如果初始化数组时方括号为空,C++编译器将根据元素个数计算数组长度。

```c++
    short things[] = {1,3, 5, 8}; //数组长度为4
```

- 数组初始化,可以省略等号（=）

```c++
    double earnings[4] {1.2e4, 1.6e4, 1.8e4, 2.0e4};   // okay with c11
```

- 可不在大括号内包含任何东西,将所有元素设置为0

```c++
    unsigned int counts[10] {};    // all elements set to 0
```

- 列表初始化禁止缩窄转换

```c++
    long plifs[] = {25, 92, 3.0};    // not allowed
    char slifs[4] = {'h', 'i',1122011, '\0'}; // not allowed
    char tlifs[4] = {'h', 'i',112, '\0'}; // allowed
```

> C+++标准模板库〔STL）提供了一种数组替代品——模板类 `vector`,而C++1l新增了模板类`aray`。这些替代品比内置复合类型数组更复杂、更灵活。

### 4.2 字符串

#### 4.2.1 C++处理字符串的方式

- C-风格字符串（C-style string）
    
    > 使用字符数据方式存储，最后字符必须是`\0`。在确定存储字符串所需的最短数组时，`需要将界位的空字符计算在内`

```c++
char dog[8] = {'b','e',"a',"u,'x','','r','r'}; // not a string
char cat[8] = {'f','a','t','e','s','s','a','\0'}; // a string
char bird[11] = "Mr. Cheeps"; // the \0 is understood
char fish[] = "Bubbles"; // let the compiler count
```

*`注：字符串常量（使用双引号）不能与字符常量（使用单引号）互换。`*

字符常量（如`'S'`)是字符串编码的简写表示。在ASCII系统上，`'S'`只是83的另一种写法。但`"S"`不是字符常量，他表示两个字符(字符S和\0)组成的字符串，另外，`"S"`实际上表示的是字符串所在的`内存地址`。

- 基于string类库的方法

#### 4.2.2 字符串的输入

- `cin`
- `cin.getlin(数组名, 元素个数)` // 面向行的输入

```c++
    cin.getline(name, 20); // getline()每次读入一行，通过换行符确定行尾，但不保存换行符,存储时用\0替换\n
```

- `cin.get()`    //面向行的输入

```c++
    cin.get(name, ArSize);    //可读取一行，并不丢弃最后的换行符，而是保留在输入队列中
    cin.get();                // 可读取下一个字符，包括换行符
    cin.get(dessert, ArSize);  // read second line
```

另一种方法是将`两个类成员函数拼接起来（合并）`

```c++
    cin.get(name, ArSize).get();    //redd first line
    cin.get(dessert, ArSize);  // read second line

    cin.getline(name1, ArSize).getline(name2, ArSize);
```

*注：之所以可以这样做，是由于cin.get(name,ArSize)返回一个cin对象，该对象随后被用来调用get()函数。getline()使用起来简单些，get()使得检查错误更简单些。*

#### 4.2.3 空行和其他问题

当get()（不是getline())读取空行后将设置失效位（failbit）。接下来的输入将被阻断，可以使用下面的命令恢复输入：
`cin.clear();`

另一个潜在问题，`输入字符串可能比分配空间长`。如果输入行包含的字符数比指定的多，则`getline()`和`get()`将把余下的字符留在队列中，而`getline()`还会设置失效位，并关闭后面的输入。

`C++常使用指针（而不是数组）处理字符串。`

### 4.3 string类简介

ISO/ANSI C++98标准添加string类扩展了C++库。要使用string类，必须包含头文件string，string包含在名称空间std中。

在很多方面，使用string对象的方式与使用字符数组相同。

- 可以使用C-风格字符串来初始化string对象
- 可以使用cin来讲键盘输入存储到string对象中
- 可以使用cout来显示string对象
- 可以使用数组表示法来访问存储在string对象中的字符

string对象和字符数组的主要区别是，可以将string对象声明为简单变量，而不是数组。

```c++
    string str1;
    string str2 = "panther";
```

`类设计让程序能够自动处理 string的大小`。例如，stl的声明创建一个长度为0的string对象，但程序将输入读取到str1中时，将自动调整strl的长度：

```c++
    cin > strl;    // strl resized to fit input
```

这使得与使用数组相比，使用 string对象更方便，也更安全。从理论上说，可以将char数组视为一组用于`存储一个字符串的char存储单元`，而 `string类变量是一个表示字符串的实体`.

#### 4.3.1 C++11字符串初始化

C++11允许将列表初始化用于C-风格字符串和string对象：

```c++
    char first_date[] = {"Le Chapon Dodu"};
    char second_date[] {"The Elegant Plate"};
    string third_date = {"The Bread Bowl"};
    string fourth_date {"Hank's Fine Eats"};
```

#### 4.3.2 赋值、拼接和附加

```c++
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2  = "panther";
    charr1 = charr2;                // 非法, no array assignment
    str1 = str2;                    // 合法, object assignment ok

    string str3;
    str3 = str1 + str2;             // 字符串合并 assign str3 the joined strings
    str1 += str2;                   // 字符串合并 add str2 to the end of str1
```

#### 4.3.3 string类的其他操作

对于c-风格字符串，可以使用头文件cstring（以前为string.h）中的strcpy()将字符串复制到字符数组中，使用函数strcat()将字符串附加到字符数组末尾。

```c++
    strcpy(charr1, charr2);        // copy charr2 to charr1
    strcat(charr1, charr2);        // append contents of charr2 to charr1
```

函数strlen()是一个常规函数，它接受一个C-风格字符串作为参数，并返回该字符串包含的字符数。函数size()是一个类方法，功能基本与此相同。用法：`str1.size()`
