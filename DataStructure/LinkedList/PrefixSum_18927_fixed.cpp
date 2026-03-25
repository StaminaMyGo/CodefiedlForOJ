#include <iostream>
#include <string>
using namespace std;
//
int main()
{
    using ll = long long;
    int n, m;
    // 关闭同步，加速cin/cout
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    const int MAXN = 1e5;
    ll sum[MAXN + 5] = {0};
    int tmp;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        sum[i] = sum[i - 1] + tmp;
    }
    cin >> m;
    int left_, right_;
    for (int i = 0; i < m; i++)
    {
        cin >> left_ >> right_;
        cout << sum[right_] - sum[left_ - 1] << '\n';
    }
    return 0;
}