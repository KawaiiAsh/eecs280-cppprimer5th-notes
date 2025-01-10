#include <iostream>
using namespace std;

int main()
{
    int currVal = 0;
    int val = 0;
    if (cin >> currVal)
    {
        int cnt = 1; // 用于计数
        while (cin >> val)
        { // 持续读取
            if (val == currVal)
            {
                cnt++; // 当前值计数增加
            }
            else
            {
                cout << currVal << " occurs " << cnt << " times" << endl;
                currVal = val; // 更新当前值
                cnt = 1;       // 重置计数器
            }
        }
        // 确保最后一组数据打印
        cout << currVal << " occurs " << cnt << " times" << endl;
    }
    return 0;
}
