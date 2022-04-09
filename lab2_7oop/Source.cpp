//Source.cpp

#include "Account.h"
#include "Money.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Account d("Smith", 0102, 1.5, 2000);
    cout << d << endl;
    d = ++d;
    cout << d << endl;
    Account e;
    cin >> e;
    cout << e << endl;

    return 0;
}