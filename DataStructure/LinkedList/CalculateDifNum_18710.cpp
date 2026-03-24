#include <iostream>
using namespace std;
/*
实现一次比较，并“在输入的同时进行计数”
*/
int main()
{
    int n;
    cin >> n;
    const int MAXN = 2e5;
    bool appeared[MAXN + 1] = {false};
    int num, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (!appeared[num])
        {
            appeared[num] = true;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}