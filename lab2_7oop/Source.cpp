//Source.cpp

#include "Account.h"
#include "Money.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Money b(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2);
    cout << b;
    Money c(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
    Account a;
    a.Init("john", 0001, 1.5, b);
    a.Withdraw(c);
    a.Display();

    return 0;
}