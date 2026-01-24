# include<iostream>
using namespace std;
class pen {
    public:
    void cost (int a ){
        cout<<"Integer  a"<<endl;
    }

void show (double a ){
    cout <<"Double value of a "<<endl;
}
};
int main (){
    pen p;
    p.cost();
    p.show();
}