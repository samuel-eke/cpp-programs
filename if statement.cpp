#include <iostream>;
using namespace std;
int main()
{
    string destination, name, busstop;
    int price, fuelcap;
    int a = 15;
    if (a > 10) {
        cout << "What is your name? ";
        getline(cin, name);
        cout << "\n where are you headed? ";
        getline(cin, destination);
            if (destination == "enugu") {
                cout << "Sorry, our buses are not avaliable at the moment";
            } else if (destination == "kano") {
                cout << "We have increased the bus fare by 20%. \nTHank you for your understanding";
            } else {

            }
        cout << "How much are you paying ";
        cin >> price;
        cout << name << ", Enjoy your ride";
    } else if ( a > 5){
        cout << "What is your name? ";
        getline(cin, name);
        cout << "\n where are you headed? ";
        getline(cin, destination);
            if (destination == "Awka") {
                cout << "Sorry, our buses are not avaliable at the moment";
            } else if (destination == "Nasarawa") {
                cout << "We have increased the bus fare by 20%. \nTHank you for your understanding";
            } else{

            }
        cout << "\nHow much are you paying ";
        cin >> price;
        cout << name << ", Enjoy your ride";

    } else {
        cout<< "Sorry we are not avaliable";
    }
}
