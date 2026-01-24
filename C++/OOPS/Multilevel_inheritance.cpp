#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Animals are eating" << endl;
    }
};

class Dog{
    public:     
    void jump(){
        cout << "Dog can jump" << endl;
    }
};

class puppy : public Dog, public Animal {

};

int main() {
    puppy p;
    p.eat();    
    p.jump();  

    return 0;
}
