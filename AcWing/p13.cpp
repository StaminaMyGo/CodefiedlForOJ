#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1005] = {0};
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr[tmp]++;
    }
    for (int i = 0; i <= 1000; i++)
    {
        if (arr[i] == 0 || arr[i] == 1)
            continue;
        if (arr[i] == 2)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}