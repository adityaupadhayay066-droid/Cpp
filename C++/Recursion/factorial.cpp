#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        cout << i;
        if (i != 1)
            cout << " x ";
    }
    cout << " = " << Factorial(n);
}