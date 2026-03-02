# include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"Sum of a and b is ";
    return a+b;

}
int main (){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the vallue of b : ";
    cin>>b;
    cout<<"Sum of a and b is : "<<sum(a,b);
}