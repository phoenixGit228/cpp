// ///////////////////////////////////////////////////////
//
// 名称: strings.cpp
// 描述: storing strings in an array
// 日期: 2021-04-11 09:34:59
//
// ///////////////////////////////////////////////////////
#include <iostream>
#include <cstring> //for the strlen() function
int main(void)
{
    using namespace std;
    cout << "------测试--------" << endl;
    cout << "I'd give my right arm to be"
            " a great violinist.\n";
    cout << "I'd give my right arm to be a great violinist.\n";
    cout << "I'd give my right ar"
            "m to be a great violinist.\n";

    char shirt_size = 's';
    // char shirt_size = "S"; // 类型不匹配

    char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'};     // 不是字符串，因为最后元素不是'\0'
    char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'};    // 是字符串
    char bird[11] = "Mr. Cheeps";       // '\0'自动尾部添加
    char fish[] = "Bubbles";            // 编译器计算字符串长度
    cout << dog << endl;
    cout << cat << endl;
    cout << bird << endl;
    cout << fish << endl;
    cout << "--------------" << endl;

    const int Size {15};
    char name1[Size];               // 空数组
    char name2[Size] = "C++owboy";  // 初始化数组
    // NOTE: some implementatons may require the static keyword
    // to initialize the array name2

    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0'; //set to null character
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;

    return 0;
}