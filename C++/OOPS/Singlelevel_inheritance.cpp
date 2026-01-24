# include<iostream>
using namespace std;
class A{
    public:
    int i =20;
    void m1(){
        cout<<"Function of class A";
    }
};
class B:public A{

};
int main (){
    B b;
    cout<<b.i;
}