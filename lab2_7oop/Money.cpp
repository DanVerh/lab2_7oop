//Money.cpp

#include "Money.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Money::SetSum(Account& a, int am500, int am200, int am100, int am50, int am20, int am10, int am5, int am2, int am1, int am050, int am025, int am010, int am005, int am002, int am001) {
    a.sum = 500 * am500 + 200 * am200 + 100 * am100 + 50 * am50 + 20 * am20 + 10 * am10 + 5 * am5 + 2 * am2 + am1 + 0.5 * am050 + 0.25 * am025 + 0.1 * am010 + 0.05 * am005 + 0.02 * am002 + 0.01 * am001;
}

Account Money::SumSum(Account& a, Account& b) {
    Account c;
    c.sum = a.sum + b.sum;
    return c;
}

Account Money::DiffSum(Account& a, Account& b) {
    Account c;
    c.sum = a.sum - b.sum;
    return c;
}

Account Money::ProdSum(Account& a, Account& b) {
    Account c;
    c.sum = a.sum * b.sum;
    return c;
}

Account Money::DivSum(Account& a, Account& b) {
    Account c;
    c.sum = a.sum / b.sum;
    return c;
}

Account Money::MultOnNum(Account& a, long double number) {
    a.sum *= number;
    return a;
}

Account Money::DivOnNum(Account& a, long double number) {
    a.sum /= number;
    return a;
}

void Money::Comp(Account& a, Account& b) {
    if (a.sum > b.sum)
        cout << "First sum is bigger" << endl;
    else if (a.sum < b.sum)
        cout << "Second sum is bigger" << endl;
    else
        cout << "Sums are equal" << endl;
}