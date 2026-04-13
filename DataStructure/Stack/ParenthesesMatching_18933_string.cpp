#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s;

    while (cin >> s)
    {
        int len = s.size();
        stack<int> st;
        string mark(len, ' '); // 直接初始化为全空格

        // 遍历字符串
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else if (s[i] == ')')
            {
                if (!st.empty())
                {
                    st.pop(); // 匹配成功
                }
                else
                {
                    mark[i] = '?'; // 多余的右括号
                }
            }
        }

        // 栈中剩余的是未匹配的左括号
        while (!st.empty())
        {
            mark[st.top()] = '$';
            st.pop();
        }

        // 输出
        cout << s << endl;
        cout << mark << endl;
    }

    return 0;
}