#include <iostream>
#include <string>
using namespace std;

string processString(string s)
{
    int n = s.length();
    if (n <= 2)
        return s;

    int write = 0;

    for (int read = 0; read < n; read++)
    {
        // 检查AAA模式 / Check AAA pattern
        if (write >= 2 && s[write - 1] == s[write - 2] && s[write - 1] == s[read])
        {
            continue; // 跳过当前字符 / Skip current character
        }

        // 检查AABB模式 / Check AABB pattern
        if (write >= 3 && s[write - 1] == s[read] &&
            s[write - 2] != s[read] && s[write - 2] == s[write - 3])
        {
            continue; // 跳过当前字符 / Skip current character
        }

        s[write++] = s[read];
    }

    return s.substr(0, write);
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        cout << processString(s) << endl;
    }

    return 0;
}