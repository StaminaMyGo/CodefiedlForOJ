#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> prefix2(n + 1, 0);
    vector<int> suffix1(n + 2, 0);
    vector<int> cows(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> cows[i];
    }
    // 前缀和处理
    for (int i = 1; i <= n; i++)
    {
        prefix2[i] = prefix2[i - 1] + (cows[i] == 2 ? 1 : 0);
    }
    // 后缀和处理
    for (int i = n; i >= 1; i--)
    {
        suffix1[i] = suffix1[i + 1] + (cows[i] == 1 ? 1 : 0);
    }
    // 寻找变化次数最小的K点
    int ans = n; // 最大不会超过 n
    for (int i = 0; i <= n; i++)
    {
        // 前 k 个全白，后 n-k 个全黑 k=0 表示全黑，k=n 表示全白。
        int tmp = prefix2[i] + suffix1[i + 1];
        ans = min(ans, tmp);
    }
    cout << ans;
    return 0;
}