#include <iostream>
#include <string>
using namespace std;
void getPostOrder(string pre, string in, string &post)
{
    if (pre.empty())
        return;
    int root = pre[0];
    int rootPos = in.find(root);
    string leftPre = pre.substr(1, rootPos);
    string leftIn = in.substr(0, rootPos);
    string rightPre = pre.substr(rootPos + 1);
    string rightIn = in.substr(rootPos + 1);

    getPostOrder(leftPre, leftIn, post);
    getPostOrder(rightPre, rightIn, post);
    post += root;
}
int main()
{
    string pre, in;
    cin >> pre >> in;
    string post = "";
    getPostOrder(pre, in, post);
    cout << post << endl;
    return 0;
}
