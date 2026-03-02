#include<iostream>
using namespace std;
class Student{
    private:
    long long int addhar_no;
    string birthmark;
    public:
    Student (long long int a, string b){
        addhar_no=a;
        birthmark=b;
    }
    void display(){
        cout<<"Addhar number of student is : "<<addhar_no<<endl;
        cout<<"Birth mark on body : "<<birthmark<<endl;
    }
};
int main(){
    Student s(601116453712, "Birth mark on inner thigh");
    s.display();
}