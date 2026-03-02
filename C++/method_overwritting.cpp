#include<iostream>
using namespace std;

class vechile {
public:
    virtual void speed() {
        cout<<"Vechile speed"<<endl;
    }
};

class Alto: public vechile {
public:
    void speed() override {
        cout<<"80 Km/hr"<<endl;
    }
};

class Audi: public vechile {
public:
    void speed() override {
        cout<<"60 km/hr"<<endl;
    }
};

int main(){
    vechile v;
    v.speed();

    Alto a;
    a.speed();

    Audi d;
    d.speed();
}
