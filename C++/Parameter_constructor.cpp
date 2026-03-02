# include<iostream>
using namespace std;
class student{
    public:
    string name;
    long long int regno;
    string m_name;
    student(string name, long long int regno , string m_name){
        this-> name=name;
        this-> regno=regno;
        this -> m_name=m_name;
    }
};
int main (){
    student  s ("Aditya Upadhayay",250314100146, "Soni Tiwari");
 cout<<s.name<<endl;;
 cout<<s.regno<<endl;
 cout<<s.m_name<<endl;
}