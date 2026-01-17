#include <iostream>
using namespace std;
class Student
{
private:
    long long int addhar_no;
    string pan_no;

public:
    Student(long long int a, string p)
    {
        addhar_no = a;
        pan_no = p;
    }
    void display()
    {
        cout << "Sample Addhar number of student is : " << addhar_no << endl;
        cout << "Sample Pan number of student " << pan_no << endl;
    }
};
int main()
{
    Student s(373745689898, "54811XXXXXA");
    s.display();
}