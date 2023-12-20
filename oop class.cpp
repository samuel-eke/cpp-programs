#include <iostream>
using namespace std;

class newClass {
public:  //access specifier
    int bvn;
    string bankname;  //attributes
    string accountname;
};

int main()
{
    newClass fbn;
    fbn.accountname = "sam eke";
    fbn.bankname = "cbn";
    fbn.bvn = 44234423;
    cout << "Account details: \n"<<fbn.accountname << "\n" << fbn.bankname << "\n" << fbn.bvn;
}
