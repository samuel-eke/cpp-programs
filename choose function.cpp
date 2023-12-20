#include <iostream>
#include <cmath>
using namespace std;
double perimeter(double l, double w)
{
    double p = 2 * (l + w);
    return p;
}

double area_circle (double r)
{
    const double pi = 3.14;
    double area;
    area = pi * (pow(r, 2));
    return area;
}

int main()
{
    double lenth, width, radius;
    cout<< "Choose interested operation\na. Find Perimeter of a rectangle \tb. Find Area of a circle\nEnter the respective letter for the program ";
    string response, opt;
    cin>>response;
    if (response == "a") {
        cout<< "\nYou have chosen to find Perimeter";
        cout<< "\nWhat is the length? ";
        cin>>lenth;
        cout<< "\n What is the Width? ";
        cin>> width;
        cout<<perimeter(lenth, width);
        cout << "\nDo you wish to carry out further operations? (yes/no) ";
        cin>>opt;
        if (opt == "yes")
        {
            main();
        }
    } else if(response == "b"){
         cout<< "\nYou have chosen to find Area";
        cout<< "\nWhat is the radius? ";
        cin>>radius;
        cout<<area_circle(radius);
        cout << "\nDo you wish to carry out further operations? (yes/no) ";
        cin>>opt;
        if (opt == "yes")
        {
            main();
        }

    } else {
        cout<< "Option invalid";
    }

}
