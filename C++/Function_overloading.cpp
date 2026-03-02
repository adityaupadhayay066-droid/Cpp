# include<iostream>
using namespace std;
class Maths{
    public:
    int add(int a, int b){
        return a+b;
    }
    int substract(int a, int b){
        return a-b;
    }
};
int main (){
    Maths m;
    cout<<"Addition of numbers : "<<m.add(10,80)<<endl;
    cout<<"Substraction of numbers : "<<m.substract(100,80)<<endl;
}