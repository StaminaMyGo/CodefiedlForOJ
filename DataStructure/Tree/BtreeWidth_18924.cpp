#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int left;
    int right;
} tree[55];

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
    queue<int> q;
    q.push(1);
    int max_width = 0;
    while (!q.empty())
    {
        int levelSize = q.size();
        max_width = max(levelSize, max_width);

        for (int i = 0; i < levelSize; i++)
        {
            int node = q.front();
            q.pop();

            if (tree[node].left != 0)
            {
                q.push(tree[node].left);
            }
            if (tree[node].right != 0)
            {
                q.push(tree[node].right);
            }
        }
    }
    cout << max_width << endl;
    return 0;
}