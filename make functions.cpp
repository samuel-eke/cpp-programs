#include <iostream>
using namespace std;
void trialfunction(string fname, int age) {  //define the datatype give variable name
    cout<< "Welcome " << fname << ", its a pleasure\n. We know you are " << age <<" years old\n";
    cout<< "This function has been executed by the main function\n";
}
int main()
{
    trialfunction("Mikel", 43);

}
