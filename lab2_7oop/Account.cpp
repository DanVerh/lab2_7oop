//Account.cpp

#include "Account.h"
#include "Money.h"
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

void Account::Init(string name1, int num1, double perc1, Money sum1) {
    name = name1;
    num = num1;
    perc = perc1;
    sum = sum1;
}

void Account::Read() {
    cout << "name = "; cin >> name;
    cout << "number = "; cin >> num;
    cout << "percent = "; cin >> perc;
    cout << "sum = "; cin >> sum;
}

void Account::Display() {
    cout << name << endl;
    cout << num << endl;
    cout << perc << endl;
    cout << sum << endl;
}

void Account::Withdraw(Money value) {
    sum = sum - value;
}

void Account::TopUp(Money value) {
    sum = sum + value;
}

void Account::Interest() {
    sum = sum *= 0.01 * perc;
}

void Account::Dollar() {
    sum = sum /= 32;
}

void Account::Euro() {
    sum = sum /= 35;
}

string Account::toString() {
    string d;
    stringstream sout;
    sout << sum.Sum() << endl;
    d = sout.str();
    d.replace(d.find("."), 1, ",");
    return d;
}

Account& Account::operator ++()
{
    ++perc;
    return *this;
}
Account& Account::operator --()
{
    --perc;
    return *this;
}
Account Account::operator ++(int)
{
    Account tmp = *this;
    this->perc++;
    return tmp;
}
Account Account::operator --(int)
{
    Account tmp = *this;
    this->perc--;
    return tmp;
}

