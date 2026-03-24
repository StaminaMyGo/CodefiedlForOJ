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