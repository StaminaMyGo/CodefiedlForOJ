#include <iostream>
using namespace std;
const int N = 1e5 + 5;
int l[N], r[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int head = 1;
    for (int i = 2; i <= n; i++)
    {
        int x, p;
        cin >> x >> p;
        if (p == 0)
        {
            // insert into the left of x i>x
            l[i] = l[x];
            r[i] = x;

            if (l[x] != 0)
                r[l[x]] = i;
            l[x] = i;

            if (l[i] == 0)
            {
                head = i;
            }
        }
        else
        {
            r[i] = r[x];
            l[i] = x;
            if (r[x] != 0)
                l[r[x]] = i;
            r[x] = i;
        }
    }
    // output
    int cur = head;
    while (cur != 0)
    {
        /* code */
        cout << cur << " ";
        cur = r[cur];
    }

    return 0;
}
