#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"A";
    }
};
class B: public A{
    public:
    void show(){
        cout<<"B";
    }

};
int main (){
    A*ptr;
    B b1;
    ptr=&b1;
    ptr->show();
}

