#include <iostream>
using namespace std;
int calc(int a, int b){
    return a + b;
}

int main()
{
    int a, b;
    cout<< "This program will receive a a parameter for math operation\n";
    cout<< "Enter your first number ";
    cin>>a;
    cout<<"\nEnter another number ";
    cin>>b;
    cout<< calc(a, b);
}
