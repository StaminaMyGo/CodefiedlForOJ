#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // 暴力解法 循环套循环/可直接根据题意步骤化
    int ans = -2e5;

    for (int i = n; i >= 1; i--)
    {
        int minN = 3e5;
        for (int j = i - 1; j >= 1; j--)
        {
            minN = min(minN, arr[j]);
        }
        ans = max(ans, arr[i] - minN);
    }
    cout << ans << endl;
    return 0;
}