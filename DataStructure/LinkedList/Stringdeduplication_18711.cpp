#include <iostream>
#include <string>
using namespace std;
/*
创建一个大小为26的布尔数组，对应26个小写字母
遍历输入字符串，将出现的字母对应的数组位置标记为true3. 按顺序遍历数组，输出所有标记为true的字母
时间复杂度： O(n)，n为字符串长度
空间复杂度： O(1)，只使用了固定大小的数组这种方法利用了线性表的索引思想，将字母映射到数组下标，实现了高效的去重和排序。
*/
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