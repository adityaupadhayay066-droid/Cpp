#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string department;

private:
    double salary;

public:
    // Constructor
    Teacher(string n, string d, double s)
    {
        name = n;
        department = d;
        salary = s;
    }

    void display()
    {
        cout << "Salary of Teacher is: " << salary << endl;
        cout<<"name of Teacher is :  "<<name<<endl;
        cout<<"Teacher Department: "<<department<<endl;
    }
};

int main()
{
    Teacher T("Aditya", "BCA", 25000);
    T.display();

    return 0;
}
