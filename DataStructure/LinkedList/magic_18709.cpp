#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    const int MAXN = 2e5;
    int cows[MAXN + 5] = {0};
    int cnt_white = 0;
    int cnt_black = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> cows[i];
        if (cows[i] == 1)
        {
            cnt_white++;
        }
        else
        {
            cnt_black++;
        }
    }

    // 全变白（1）

    // 全变黑（2）

    // 前面白，后面黑
    int cnt_change = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cows[i] == 2 && (cows[i + 1] == 1 || cows[i + 1] == 2))
        {
            cnt_change++;
        }
        if (cows[i] == 1 && cows[i + 1] == 2)
        {
            break;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if (cows[i] == 1 && (cows[i - 1] == 1 || cows[i - 1] == 2))
        {
            cnt_change++;
        }
        if (cows[i] == 2 && cows[i - 1] == 1)
        {
            break;
        }
    }
    cout << min(cnt_change, min(cnt_black, cnt_white)) << '\n';
    // 比较三种方法的改变次数，取最小者
    return 0;
}