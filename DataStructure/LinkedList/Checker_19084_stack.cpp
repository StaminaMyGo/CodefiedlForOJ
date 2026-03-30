#include <iostream>
#include <string>
#include <vector>
using namespace std;

string processString(string s)
{
    vector<char> st; // 使用vector模拟栈，方便索引 / Use vector to simulate stack for indexing

    for (char c : s)
    {
        // 检查AAA模式：如果栈顶两个字符都等于当前字符 / Check AAA: if top two chars equal current
        if (st.size() >= 2 && st[st.size() - 1] == c && st[st.size() - 2] == c)
        {
            // AAA模式，跳过当前字符 / AAA pattern, skip current
            continue;
        }

        // 检查AABB模式：如果栈顶是XXYY的形式，当前字符是Y，跳过 / Check AABB: if top is XXYY form, current is Y, skip
        if (st.size() >= 3 &&
            st[st.size() - 1] == c && // 当前字符与栈顶相同 / Current same as top
            st[st.size() - 2] != c && // 栈顶第二个不同 / Second from top different
            st[st.size() - 2] == st[st.size() - 3])
        { // 栈顶第二第三个相同 / Second and third from top same
            // AABB模式，跳过当前字符 / AABB pattern, skip current
            continue;
        }

        st.push_back(c);
    }

    string result = "";
    for (char c : st)
    {
        result += c;
    }
    return result;
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