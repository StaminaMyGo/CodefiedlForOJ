#include <iostream>
#include <climits> // 提供 INT_MIN, INT_MAX
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int ans = -2e5; // INT_MIN
    int ans = INT_MIN;
    int minN = arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, arr[i] - minN);
        minN = min(minN, arr[i]);
    }
    cout << ans << endl;
    return 0;
}