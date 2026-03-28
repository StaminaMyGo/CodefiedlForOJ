#include <iostream>
using namespace std;
int josePhusLinkedList(int n, int k)
{
    int survivor = 0;
    for (int i = 2; i <= n; i++)
    {
        survivor = (survivor + k) % i;
    }
    return survivor;
}
int main()
{
    int n;
    cin >> n;
    int k = 3;

    cout << josePhusLinkedList(n, k) + 1;

    return 0;
}