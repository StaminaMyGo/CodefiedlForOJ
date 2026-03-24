#include <iostream>
#include <string>
using namespace std;
/*
getline 方法能够通过 OJ 是因为：
1. 明确控制输入流：通过 cin.ignore() 主动清除残留字符
2. 更灵活：getline 可以读取包含空格的整行
3. 更安全：可以结合 n 进行长度控制，防止越界
4. 兼容性好：能处理不同操作系统的换行符差异
*/

int main()
{
    int n;
    string s;

    cin >> n;
    cin.ignore(); // 忽略换行符

    getline(cin, s); // 使用getline读取整行

    bool appeared[26] = {false};

    // 只处理前n个字符（如果字符串长度大于n）
    for (int i = 0; i < n && i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        { // 确保是小写字母
            appeared[s[i] - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (appeared[i])
        {
            cout << char('a' + i);
        }
    }
    // cout << endl;

    return 0;
}