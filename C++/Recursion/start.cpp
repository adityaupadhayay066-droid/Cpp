// recursive function
#include <iostream>
using namespace std;
void printingNumber(int n)
{
    if (n == 1)
    {
        cout << 1;
        return;
    }
    printingNumber(n - 1);
    cout << n << "->";
}
int main()
{
    printingNumber(100);
}