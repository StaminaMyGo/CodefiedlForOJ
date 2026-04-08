#include <iostream>
using namespace std;

int main()
{
    int a, b;
    const int N = 4000;
    int arrA[N] = {0};
    int arrB[N] = {0};
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> arrA[i];
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> arrB[i];
    }
    int s = a + b;
    int arrS[N] = {0};
    int k = 0, i = 0, j = 0;
    while (i < a && j < b)
    {
        if (arrA[i] <= arrB[j])
        {
            arrS[k++] = arrA[i++];
        }
        else
        {
            arrS[k++] = arrB[j++];
        }
    }
    while (i < a)
        arrS[k++] = arrA[i++];
    while (j < b)
        arrS[k++] = arrB[j++];

    cout << "List A:";
    for (int i = 0; i < a; i++)
        cout << arrA[i] << " ";
    cout << endl;
    cout << "List B:";
    for (int i = 0; i < b; i++)
        cout << arrB[i] << " ";
    cout << endl;
    cout << "List C:";
    for (int i = 0; i < s; i++)
        cout << arrS[i] << " ";
    cout << endl;
    return 0;
}