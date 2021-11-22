// ///////////////////////////////////////////////////////
// 名称: paixu.cpp
// 描述: 
// 日期: 2021-11-19 12:53:16
// ///////////////////////////////////////////////////////
#include <iostream>

int main(void)
{
    using namespace std;
    int temp=0;

    int score[] = {5,3,5,2,8};
    for (int i =0;i < 4; i++)       
        for(int j = i+1;j < 5; j ++)
            {
                // if(score[i] < score[j])
                // {
                //     temp = score[i];
                //     score[i] = score[j];
                //     score[j] = temp;
                // }
                if(score[i] < score[j])
                {
                    score[i] = score[i]^score[j]^score[i];
                    score[i] = score[j];
                    score[j] = temp;
                }
            }
    for (int i=0;i<5;i++)
        cout << score[i] << " ";
    cout << endl;
    return 0;
}
