#include <iostream>
using namespace std;
int main()
{
    string my_name = "Livy ";
    string address = "Fct, Abuja";
    string new_name = my_name +address;
    string height = "30cm";
    new_name = my_name + " is " + height + " , he lives in " + address;
    cout<< new_name;
    cout<< "\n The total number of letters is " << new_name.length() <<"\n";
    cout << my_name[1];

}
