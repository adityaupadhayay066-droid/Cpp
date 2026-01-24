# include<iostream>
using namespace std;
class X{
    private:
    int a=9;
    friend class Y;
};
class Y{
    public:
    void display(X obj){
         cout<<obj.a<<endl;

    }
   
};
int main (){
    Y y;
    X x;
    y.display(x);
}