#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    if (n == 0)
    {
        cout << endl;
        return 0;
    }
    cin >> s;
    bool appeared[26] = {false};
    for (int i = 0; i < n; i++)
    {
        appeared[s[i] - 'a'] = true; // 字符转数字
    }

    for (int i = 0; i < n; i++)
    {
        if (appeared[i])
        {
            cout << char('a' + i); // 数字转字符
        }
    }

    return 0;
}