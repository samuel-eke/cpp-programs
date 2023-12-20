#include <iostream>
using namespace std;
int callsum(int a)
{
    if (a > 0)
    {
        return a + callsum(a - 1);
    }else
    {
        return 0;
    }
}
int main()
{
    int total = callsum(876);
    cout << total;
}
