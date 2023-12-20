#include <iostream>
using namespace std;
int main()
{
    string musicians[8] = {"kanye west", "zinoleesky", "spyro", "tiwa savage", "yemi alade", "mercy chinwo", "dunsin", "victoria"};
    cout << musicians[3];
    musicians[3] = "\nP square\n";
    cout << musicians[3];
    cout<< "\nArtist signed to BigMusik Records\n";
    for (int i =0; i < 8; i++){
        cout << musicians[i] << "\n";
    }
}
