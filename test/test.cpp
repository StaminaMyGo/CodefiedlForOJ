#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    cin >> m;
    vector<int> B(m);
    for (int i = 0; i < m; i++)
        cin >> B[i];

    // 输出A
    cout << "List A:";
    for (int x : A)
        cout << x << " ";
    cout << endl;

    // 输出B
    cout << "List B:";
    for (int x : B)
        cout << x << " ";
    cout << endl;

    // 合并
    vector<int> C = A;
    C.insert(C.end(), B.begin(), B.end());
    sort(C.begin(), C.end());
    // 输出C
    cout << "List C:";
    for (int x : C)
        cout << x << " ";
    cout << endl;

    return 0;
}