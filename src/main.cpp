#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    //    


    Checking_Account frank{ "Mina", 5000 };
    cout << frank << endl;

    Account* trust = new Trust_Account("Tony");
    cout << *trust << endl;

    Account* p1 = new Checking_Account("Fra", 10000);
    Account* p2 = new Savings_Account("Gabriel", 1000);
    Account* p3 = new Trust_Account("Meriam");

    std::vector<Account*> accounts{ p1,p2,p3 };

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(accounts);

    delete p1;
    delete p2;
    delete p3;
    return 0;
}

