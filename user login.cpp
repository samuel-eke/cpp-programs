#include <iostream>
using namespace std;
int main()
{
    string username;
    int pin;
    cout << "Enter username ";
    getline(cin, username);
    cout<< "\nEnter your pin ";
    cin>> pin;
    while(username != "great" && username != "admin"){
        cout << "Enter username ";
        cin >> username;
        break;
    }
    if (username == "great" && pin == 1234){
        cout<< "Welcome dear user";
    }else if (username == "admin"){
        cout<< "Admin privileges activated";
    } else {
        cout<< "Intruder alert, activated";
    }
}
