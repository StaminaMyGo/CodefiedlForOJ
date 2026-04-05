#include <iostream>
using namespace std;
void f(int x)
{
    cout << "int" << endl;
}

void f(int *x)
{
    cout << "pointer" << endl;
}
int main()
{
    cout << "C++ version: " << __cplusplus << endl;
    f((int)NULL);
    // f(nullptr);
    return 0;
}