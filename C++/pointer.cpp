# include<iostream>
using namespace std;
int main (){
    int a = 20;
    int*p=&a; // * is dereferencing operator 
    *p=50;
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of p is : "<<*p<<endl;
}