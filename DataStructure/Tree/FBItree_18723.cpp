#include <iostream>
using namespace std;
string s;
// judge Interval type
char getType(int l, int r)
{
    bool has0 = false, has1 = false;
    for (int i = l; i <= r; i++)
    {
        if (s[i] == '0')
            has0 = true;
        else
            has1 = true;
    }
    if (has0 && has1)
        return 'F';
    if (has0)
        return 'B';
    return 'I';
}
// Recursive construction + post-order traversal
void dfs(int l, int r)
{
    if (l == r)
    {
        if (s[l] == '0')
            cout << 'B';
        else
            cout << 'I';
        return;
    }
    int mid = (l + r) / 2;
    // left tree
    dfs(l, mid);
    // right tree
    dfs(mid + 1, r);
    cout << getType(l, r);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin >> s;
    dfs(0, s.size() - 1);
    return 0;
}
