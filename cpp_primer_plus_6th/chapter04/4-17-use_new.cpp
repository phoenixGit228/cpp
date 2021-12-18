// ///////////////////////////////////////////////////////
// 名称: use_new.cpp
// 描述: 使用new关键字创建指针
// 日期: 2021-05-04 15:46:23
// ///////////////////////////////////////////////////////
#include <iostream>

int main(void) {
	using namespace std;

	int nights = 1001;
	int *pt = new int; // 分配一个存储int的空间
	*pt = 1001;        // 在那里存储一个内存

	cout << "nights value = ";
	cout << nights << "; location = " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;

	double *pd = new double; // 为double类型分配内存空间
	*pd = 10000001.0;        // 存储空间

	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;

	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;

	int *ps = new int;      // 使用new分配内存
	*ps = 500;
	cout << "Address ps = " << ps;
	cout << ", value *ps = " << *ps << endl;
	delete ps;              // 使用delete删除分配的内存，但不会删除ps本身
	// 还可以将ps重新指向另一个新分配的内存空间

	ps = new int;
	cout << "Address ps = " << ps;
	cout << ", value *ps = " << *ps << endl;

	int *py = new int;
	delete py;
	// delete py; // 不要尝试释放已经释放的内存，C++声明，后果不确定
	int jugs = 5;
	int *pi = &jugs;
	// delete pi;          // 不允许，内存不是由new分配内存
	int *pf = new int;
	int *pq = pf;
	delete pq;

	return 0;
}