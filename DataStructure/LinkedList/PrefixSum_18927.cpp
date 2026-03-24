#include <iostream>
#include <string>
using namespace std;
// timeout
int main()
{
    int n;
    const int MAXN = 2e5;
    int arr[MAXN + 1] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pointsNum;
    int firstPt, lastPt, sum;
    scanf("%d", &pointsNum);
    for (int i = 0; i < pointsNum; i++)
    {
        sum = 0;
        // printf("请输入端点：");
        scanf("%d %d", &firstPt, &lastPt);

        for (int i = firstPt; i <= lastPt; i++)
        {
            sum += arr[i - 1];
        }
        printf("%d\n", sum);
    }
    return 0;
}