#include <iostream>
using namespace std;

// Base class
class Furniture {
public:
    Furniture() {
        cout << "Furniture Constructor Called" << endl;
    }
    ~Furniture() {
        cout << "Furniture Destructor Called" << endl;
    }
};

// Derived class
class Chair : public Furniture{
public:
    Chair() {
        cout << "Chair Constructor Called" << endl;
    }
    ~Chair() {
        cout << "Chair  Destructor Called" << endl;
    }
};

// Further Derived class
class  sofa : public Chair{
public:
    sofa() {
        cout << "sofa Constructor Called" << endl;
    }
    ~sofa() {
        cout << "sofa Destructor Called" << endl;
    }
};

int main() {
    // Creating object of most derived class
    sofa s;
    return 0;
}