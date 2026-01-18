// A default constructor is a constructor that is automatically called when an object is created without passing any values, and it does not have any parameters.

#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    double height;

    student()
    {
        cout << "Default constructor called" << endl;
        name = "Unknown";
        age = 0;
        height = 0.0;
    }

    student(string n, int a, double h)
    {
        cout << "Parameterized constructor called" << endl;
        name = n;
        age = a;
        height = h;
    }
};

int main()
{
    student s("Aditya Upadhayay", 18, 6.1);

    cout << "Name : " << s.name << endl;
    cout << "Age : " << s.age << endl;
    cout << "Height : " << s.height << endl;

    return 0;
}
