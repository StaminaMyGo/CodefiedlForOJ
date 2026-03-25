#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int main()
{
    // 测试 endl
    auto start = high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
    {
        cout << i << endl;
    }
    auto end_e = high_resolution_clock::now();
    auto duration_e = duration_cast<milliseconds>(end_e - start);
    cout << "endl 耗时: " << duration_e.count() << "ms\n";

    // 测试 "\n"
    start = high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
    {
        cout << i << "\n";
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    cout << "\\n 耗时: " << duration.count() << "ms\n";

    return 0;
}