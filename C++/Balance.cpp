# include<iostream>
using namespace std;
class Bank {
    public:
    string name;   
}

int main(){
    string class_name;
    cout<<"Enter the class name";
    cin>>class_name;

    Bank class_name;
    class_name.name = "harry";
    cout<<class_name.name;
}