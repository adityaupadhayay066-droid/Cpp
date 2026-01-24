#include <iostream>
using namespace std;

class vechile {
public:
    string brand = "Mahindra";

    void carbrand() {
        cout << "The brand of my car is : " << brand << endl;
    }
};

class type : public vechile {
public:
    string cartype = "SUV";

    void showType() {
        cout << "The type of my car is : " << cartype << endl;
    }
};

class price : public vechile {
public:
    double price = 250000;

    void carprice() {
        cout << "The price of car is : " << price << endl;
    }
};

int main() {
    price p;
    p.carbrand();
    p.carprice();

    type t;
    t.carbrand();
    t.showType();
}
