/* variables declared as static in a function are crrated & initialised one for the entire execution of programme 
  Static varibales in a class are created & initialised once */

#include<iostream>
using namespace std;
void fun(){
    static int x=0;
    cout<<"Value of X is : "<<x<<endl;
    x++;
}
int main (){
  cout<<"X-------------Programme start from here -----------------X\n";
    fun();
    fun();
    fun();
    fun();
cout<<"____----------------------_____";
cout<<"XXXX End of Programme XXXX";
cout<<"____----------------------_____";
    
}