#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {

        printf("0");
        return 0;
    }

    int ans = 0;
    int current = 0;
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        current = max(tmp, current + tmp);
        ans = max(ans, current);
    }
    cout << ans << endl;
    return 0;
}