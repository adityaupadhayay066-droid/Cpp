# include<iostream>
using namespace std;
class shape{
    public:
    virtual void area()=0;
};
class square: public shape {
    public:
    void area(){
        cout<<"Area of a square"<<endl;
    }
};
int main (){
    square s;
    s.area();
}

