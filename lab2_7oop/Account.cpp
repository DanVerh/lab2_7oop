//Account.cpp

#include "Account.h"
#include "Money.h"
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

void Account::Init(string name1, int num1, double perc1, double sum1) {
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

void Account::Withdraw(double value) {
    sum -= value;
}

void Account::TopUp(double value) {
    sum += value;
}

void Account::Interest() {
    double percent = 0.01 * perc;
    sum = sum + sum * percent;
}

void Account::Dollar() {
    sum /= 32;
}

void Account::Euro() {
    sum /= 35;
}

string Account::toString() {
    string d;
    stringstream sout;
    sout << sum << endl;
    d = sout.str();
    d.replace(d.find("."), 1, ",");
    return d;
}


//2.7 additions
Account::Account() {}
Account::Account(string a, int b, double c, double d)
    : name(a), num(b), perc(c), sum(d)
{}
Account::Account(const Account& a) {
    *this = a;
}

Account& Account::operator =(const Account& r){
    name = r.name;
    num = r.num;
    perc = r.perc;
    sum = r.sum;
    return *this;
}
istream& operator >>(istream& in, Account& x){
    cout << " name: "; in >> x.name;
    cout << " num: "; in >> x.num;
    cout << " perc: "; in >> x.perc;
    cout << " sum: "; in >> x.sum;
    return in;
}
ostream& operator <<(ostream& out, const Account& x){
    out << string(x.name) << endl;
    out << int(x.num) << endl;
    out << double(x.perc) << endl;
    out << double(x.sum) << endl;
    return out;
}

Account::operator string() const{
    stringstream ss;
    ss << name << " " << num << " " << perc << " " << sum;
    return ss.str();
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

