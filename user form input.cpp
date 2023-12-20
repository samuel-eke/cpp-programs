#include  <iostream>
using namespace std;
int main() {
string name;
cout<< "What is your name? ";
getline (cin, name); //the getline allows the user to input whitespaced string, and it will received by the program
//the first parameter is the cin keyword, and the second the variable storing the string
cout<<"Your name is " << name;


}
