#include <iostream>
using namespace std;
struct Node
{
    int left;
    int right;

} tree[55];
int diameter = 0;
int dfs(int root)
{
    if (root == 0)
        return 0;
    int leftHeight = dfs(tree[root].left);
    int rightHeight = dfs(tree[root].right);
    diameter = max(diameter, leftHeight + rightHeight);
    return max(leftHeight, rightHeight) + 1;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        tree[i].left = 0;

        tree[i].right = 0;
    }
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (tree[x].left == 0)
        {
            tree[x].left = y;
        }
        else
        {
            tree[x].right = y;
        }
    }
    dfs(1);
    cout << diameter << endl;
    return 0;
}
