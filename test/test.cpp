#include <bits/stdc++.h>
using namespace std;

string s;

// 判断区间类型
char getType(int l, int r) {
    bool has0 = false, has1 = false;
    for(int i = l; i <= r; i++) {
        if(s[i] == '0') has0 = true;
        else has1 = true;
    }
    if(has0 && has1) return 'F';
    if(has0) return 'B';
    return 'I';
}

// 递归构造 + 后序遍历
void dfs(int l, int r) {
    if(l == r) {
        // 单个字符
        if(s[l] == '0') cout << 'B';
        else cout << 'I';
        return;
    }

    int mid = (l + r) / 2;

    // 左子树
    dfs(l, mid);

    // 右子树
    dfs(mid + 1, r);

    // 当前节点（后序）
    cout << getType(l, r);
}

int main() {
    int n;
    cin >> n;
    cin >> s;

    dfs(0, s.size() - 1);

    return 0;
}