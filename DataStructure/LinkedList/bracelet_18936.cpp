#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m >> c;
    vector<vector<int>> pos(c + 1);

    // input data
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        while (num--)
        {
            int x;
            cin >> x;
            pos[x].push_back(i);
        }
    }

    int ans = 0;
    // traverse every color
    for (int color = 1; color <= c; color++)
    {
        auto &p = pos[color];
        if (p.size() <= 1)
            continue;
        int sz = p.size();
        // expand array(deal with circle)
        vector<int> extended = p;
        for (int i = 0; i < sz; i++)
        {
            extended.push_back(p[i] + n);
        }
        bool bad = false;
        // two pointer
        for (int i = 0, j = 0; i < sz; i++)
        {
            // j**Expand the right boundary**
            while (j < i + sz && extended[j] - extended[i] < m)
            {
                j++;
            }
            // j locate in >=m position
            // check out whether exist a point that greater than or equal than 2
            if (j - i >= 2)
            {
                bad = true;
                break;
            }
        }
        if (bad)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}