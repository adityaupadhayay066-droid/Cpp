#include <iostream>
using namespace std;
int main() {
  struct person {
    long long int regdno;
    string name;
    float class_type;
  };
  person p1,p2;
  p1.regdno = 250314100146;
  p1.name = "Aditya Upadhaya";
  p1.class_type = 12;
  p2.regdno = 250314100137;
  p2.name ="Ram";
  p2.class_type= 12;
    cout << "Registration number : " << p1.regdno<< "\n"<<p2.regdno << endl;
  cout << "Name : " << p1.name<<"\n"<<p2.name<< endl; 
  cout << "Class : " << p1.class_type<<"\n"<<p2.class_type<< endl;
  return 0;
}