#include <iostream>
using namespace std;

int main()
{
    struct restaurant
    {
        string typeFood, headOperation, dateprod;
        int quantityMade, quantitySold, quantityRemaining;
        float price;
    };
    string dept;
    string tfood, hops, dprod;
    int quantmade, quantsold, quantremaining;
    float pprice;

    cout << "What department are you reporting for? (pizza, coffee, snacks) ";
    cin>>dept;
    if (dept == "pizza"){
        restaurant pizza;
        cout << "\nWhat type of pizza was made? ";
       getline( cin, tfood );
        cout << "\How many did you produce? ";
        cin>>quantmade;
        cout << "\nHow many did you sell? ";
        cin >> quantsold;
        cout<< "\nHow many leftovers are avaliable? ";
        cin >> quantremaining;
        cout << "\nHow much was each pizza sold for?";
        cin >> pprice;
        cout << "\nWho was in-charge of today's operation? ";
        cin >> hops;
        cout << "\nDate of reporting";
        cin >> dprod;
        pizza.typeFood = tfood;
        pizza.headOperation = hops;
        pizza.dateprod = dprod;
        pizza.quantityMade = quantmade;
        pizza.quantitySold = quantsold;
        pizza.quantityRemaining = quantremaining;
        pizza.price = pprice;
        cout << "\n\nPlease confirm information provided. \nReport for " << pizza.dateprod <<" - \nType of pizza produced " << pizza.typeFood << ". \nAmount produced is " << pizza.quantityMade << ", each sold at " << pizza.price << "NGN. The quantity sold is " <<pizza.quantitySold << " . Amount remaining is " << pizza.quantityRemaining << ". As reported by, " << pizza.headOperation;
    }
}
