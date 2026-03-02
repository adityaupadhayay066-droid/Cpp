# include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}

int sub(int c, int d){
    return c-d;
}
int  square(int x){
    return x*x;
}
int main (){
    int a=90,b=56;
    int c=45,d=34;
    int x=65;
    sum(a,b);
    sub(c,d);
    square(x);
  cout<<"Sum is : "<<sum(a,b)<<endl;
  cout<<"Substraction is : "<<sub(c,d)<<endl;
  cout<<"Square is : "<<square(x);
}