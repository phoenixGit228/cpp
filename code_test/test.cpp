#include <iostream>

int main()
{
    using namespace std;

    const int Count = 4;
    double Input;
    bool Switch = true;
    bool dataEnough = false;
    double data[10] = {};
    double total = 0;
    int index = 0, counter = 0;
    double Output = 0;

    // 测试数据
    double raw[] = {1,2,3,4,5,6,7,8,9,10,11};
    // 通过数组总字节数/单个元素占用字节数得到数组长度
    int len = sizeof(raw) / sizeof(raw[0]);
    cout << "数组长度：" << len << endl;

    for (int i = 0; i < len; i ++)
    {
        Input = raw[i];
        if (Switch) // 是否过滤开关
        {
            if (dataEnough)
                total -= data[index];
            data[index] = Input;
            total += data[index];
            index++;
            if (!dataEnough)
                counter++;
            if (index >= Count)
            {
                index = 0;
                dataEnough = true;
                counter = Count;
            }
            Output = total / counter;
        }
        else
            Output = Input;
        
        cout << "OUTPUT = " << Output << endl;
    }
    cout << "Index = " << index << endl;
    cout << "counter = " << counter << endl;
    return 0;
}
