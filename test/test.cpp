#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

int l[N], r[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int head = 1; // 初始只有1

    for (int i = 2; i <= n; i++)
    {
        int x, p;
        cin >> x >> p;

        if (p == 0)
        {
            // 插入到 x 左边
            l[i] = l[x];
            r[i] = x;

            if (l[x] != 0)
                r[l[x]] = i;
            l[x] = i;

            if (l[i] == 0)
                head = i;
        }
        else
        {
            // 插入到 x 右边
            r[i] = r[x];
            l[i] = x;

            if (r[x] != 0)
                l[r[x]] = i;
            r[x] = i;
        }
    }

    // 输出
    int cur = head;
    while (cur != 0)
    {
        cout << cur << " ";
        cur = r[cur];
    }

    return 0;
}