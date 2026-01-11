#include <iostream>
using namespace std;
class Bank
{
public:
    string name;

private:
    long long int acc_no;
    int pin;
    double balance;

public:
    Bank(string n, long long int ac, int p, double b)
    {
        name = n;
        acc_no = ac;
        pin = p;
        balance = b;
    }
    void showstudent()
    {
        cout << "Name of account holder : " << name << endl;
        cout << "Account  number : " << acc_no << endl;
        cout << "Pin : " << pin << endl;
        cout << "Account balance : " << balance << endl;
    }
};
int main()
{
    Bank b("Axis Bank 🧞", 25252512345, 123, 25000);
    b.showstudent();
}