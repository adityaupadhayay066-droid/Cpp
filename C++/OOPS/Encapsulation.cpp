#include <iostream>
using namespace std;

class Bank
{

public:
    long long int BankAccount;
    string user_name;
    string address;

    Bank(long long int b, string u, string a)
    {
        BankAccount = b;
        user_name = u;
        address = a;
    }

    class memory
    {
    private:
        int Balance;
        int total_amount;

    public:
        memory(int b, int t)
        {
            Balance = b;
            total_amount = t;
        }

        void show()
        {
            cout << "Left balance: " << Balance << endl;
            cout << "Total amount: " << total_amount << endl;
        }
    };
};

int main()
{
    Bank b(25000001484, "Aditya", "Sagar Mahal");

    cout << b.BankAccount << endl;
    cout << b.address << endl;
    cout << b.user_name << endl;

    Bank::memory m(5000, 10000);
    m.show();

    return 0;
}
