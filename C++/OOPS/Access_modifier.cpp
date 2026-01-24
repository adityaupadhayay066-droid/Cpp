#include <iostream>
using namespace std;

class Human {
public:           
    string name;

private:          
    int age;

protected:         
    string secret;

public:
    void setAge(int a) {    
        age = a;
    }

    int getAge() {
        return age;
    }

    void setSecret(string s) {
        secret = s;
    }
};

class Student : public Human {
public:
    void showSecret() {
        cout << "Protected Secret: " << secret << endl;  
    }
};

int main() {
    Human h;
    Student s;

    h.name = "Aditya Upadhayay";

    h.setAge(18);    
  
    s.setSecret("This is protected data.");
    s.showSecret();

    cout << "Name: " << h.name << endl; 
    cout << "Age: " << h.getAge() << endl;

    return 0;
}
