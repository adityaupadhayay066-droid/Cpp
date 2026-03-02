// WAP to print the personal detail and private details of a person 
# include<iostream>
using namespace std;
class student {
    public:
    string name;
   private:
    string dob ;
    long long int rollno;
    string address;
    public:
    student (string n, string d, long long int r, string a){
    rollno=r;
    dob=d;
    address=a;
    name=n;
    }
     void getstudent(){
        cout<<"Name : "<<name<<endl;
        cout<<"DOB : "<<dob<<endl;
        cout<<"Roll no : "<<rollno<<endl;
    }
 
};
int main (){
    cout<<"-----------START HERE-----------"<<endl;
    student s("Aditya","26-03-2007" ,250314100146 ,"Jamshedpur");
    s.getstudent();
    cout<<"---------------END here---------------";
}