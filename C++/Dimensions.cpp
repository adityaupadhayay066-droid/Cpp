# include<iostream>
using namespace std;
int main (){
 int choice;
 float a;
 float r;
 cout<<"1. Area of circle \n";
 cout<<"2.Area of square \n";
 cin>>choice;
 switch(choice){
    case 1:
    cout<<"Enter the radius of circle ";
    cin>>r;
    cout<<"Area of circle is :  "<<3.14*r*r;
    break;
 
 case 2:
 cout<<"Enter  the side of square";
 cin>>a;
 cout<<"Side of square is : "<<a*a;
 break;
 default:
 cout<<"Invalid choice";
}


}
