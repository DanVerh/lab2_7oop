//Account.h

#pragma once
#include <string>
using namespace std;

class Account {
private:
    string name;
    int num;
    double perc;
    double sum;
    friend class Money;
public:
    void SetName(string value) { name = value; }
    void SetNum(int value) { num = value; }
    void SetPerc(double value) { perc = value; }
    string GetName() { return name; }
    int GetNum() { return num; }
    double GetPerc() { return perc; }
    double GetSum() { return sum; }
    void Init(string name1, int num1, double perc1, double sum1);
    void Read();
    void Display();

    void ChangeName(string value) { name = value; }
    void Withdraw(double value);
    void TopUp(double value);
    void Interest();
    void Dollar();
    void Euro();

    string toString();

    //2.7 additions
    Account();
    Account(string, int, double, double);
    Account(const Account&);

    Account& operator =(const Account&);
    friend istream& operator >>(istream&, Account&);
    friend ostream& operator <<(ostream&, const Account&);
    operator string() const;

    Account& operator ++();
    Account& operator --();
    Account operator ++(int);
    Account operator --(int);

};