#include<iostream>
using namespace std;
class object{
    public:
    string name;
    string category;
    object(string name, string category){
        this->name=name;
        this->category=category; // This is used for distinguish bw member or function parameter
    }
    void display(){
        cout<<"Name of object is: "<<name<<endl;
        cout<<"Category of object is : "<<category<<endl;
    }

};
int main (){
    object o("Table", "Furniture");
    o.display();

}