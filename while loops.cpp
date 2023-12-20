#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    string k = "tommy";
    string l;
    cout << "Enter your name ";
    cin >> l;
    while (l != k)
    {
        cout << i << "\n";
        i++;
    }
}
