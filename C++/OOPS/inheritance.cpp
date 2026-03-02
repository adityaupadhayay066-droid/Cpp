# include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animlas are eating"<<endl;
    }
};
class Dog: public Animal{
 public:
 void bark(){
    cout<<"Dogs are barking"<<endl;
 }
}; 
int main (){
    Dog d;
    d.eat();
    d.bark();
}