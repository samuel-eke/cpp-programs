#include <iostream>;
using namespace std;
int main()
{
    int day = 1;
    switch (day){
    case 1:
        cout<<"Today is monday";
        break;
    case 2:
        cout<<"Today is tuesday";
        break;
    case 3:
        cout << "today is wednesday";
        break;
    case 4:
        cout << "today is thursday";
        break;
    case 5:
        cout<< "today is friday";
        break;
    case 6:
        cout << "Today is saturday";
        break;
    case 7:
        cout << "today is sunday";
        break;
    default:
        cout << "day doesn't exist";
        break;
    }
    cout << "Where are you texting from? ";
    string weather;
    getline (cin, weather);
    cout << "What is weather degree? ";
    int weather_degree;
    cin >> weather_degree;
    if (weather == "Lagos")
    {
        switch(weather_degree)
        {
        case 27:
            cout << "it is cloudy";
            break;
        case 28:
            cout << "It might rain";
            break;
        case 32:
            cout << "Today is sunny";
            break;
        default:
            cout << "Cant tell the weather";
            break;
        }

    } else if(weather == "Abuja")
    {
        switch(weather_degree)
        {
        case 27:
            cout << "it is cloudy";
            break;
        case 28:
            cout << "It might rain";
            break;
        case 32:
            cout << "Today is sunny";
            break;
        default:
            cout << "Cant tell the weather";
            break;
        }
    }

}
