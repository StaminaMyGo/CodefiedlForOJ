#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s = " " + s;
    int n = s.size() - 1;
    queue<int> q;
    if (s[1] != '#')
        q.push(1);
    bool leftToRight = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<char> level;
        for (int i = 0; i < size; i++)
        {
            int idx = q.front();
            q.pop();
            level.push_back(s[idx]);

            // left child
            if (2 * idx <= n && s[2 * idx] != '#')
                q.push(2 * idx);
            if (2 * idx + 1 <= n && s[2 * idx + 1] != '#')
                q.push(2 * idx + 1);
        }
        if (!leftToRight)
            reverse(level.begin(), level.end());
        // output
        for (char lev : level)
        {
            cout << lev << " ";
        }
        cout << endl;
        leftToRight = !leftToRight;
    }

    return 0;
}