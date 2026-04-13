#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
    char s[205];
    while (cin >> s)
    {
        int len = strlen(s);
        stack<int> st;
        char mark[205];

        for (int i = 0; i < len; i++)
        {
            mark[i] = ' ';
        }
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
                    /* code */
                    st.pop();
                }
                else
                {
                    mark[i] = '?';
                }
            }
        }
        while (!st.empty())
        {
            /* code */
            mark[st.top()] = '$';
            st.pop();
        }
        cout << s << endl;
        for (int i = 0; i < len; i++)
        {
            cout << mark[i];
        }
    }
    return 0;
}