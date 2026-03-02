// A static member variable is a variable that belongs to the class, not to individual objects.
#include <iostream>
using namespace std;

class Demo {
public:
    static int count; 

    Demo() {
        count++; 
    }
};

int Demo::count = 0;

int main() {
    Demo d1;  
    Demo d2;  
    Demo d3; 

    cout << "Number of objects created: " << Demo::count << endl;

    return 0;
}
