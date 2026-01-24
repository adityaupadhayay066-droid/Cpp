#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age here : ";
    cin >> age;

    try {
        if (age >= 18) {
            cout << "You are eligible for voting." << endl;
        } else {
            throw(age); 
        }
    }
    catch (int a) {
        cout << "You are NOT eligible to vote. Your age is: " << a << endl;
    }

    return 0;
}