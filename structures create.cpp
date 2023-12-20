#include <iostream>
using namespace std;
int main()
{
    struct bio {
        int age;
        float height;
        string name;
        string nationality;
    } ;
    string namehold;
    bio personA;
    bio personB;
    personA.age = 39;
    personB.age = 44;
    cout<< "enter name ";
    cin>>namehold;
    personA.name = namehold;
    cout<< "my name is " << personA.name;
    cout << "I am "<< personA.age << " years old";

}
