# include<iostream>
using namespace std;
int main(){
    int n, c, r, rev = 0;

    cout << "Enter a number: ";
    cin >> n;

    c = n;   

    while (n != 0) {
        r = n % 10;        
        rev = rev * 10 + r; 
        n = n / 10;        
    }

    if (c == rev) {
        cout <<" It is a palindrome number : "<<c;
    } else {
        cout << "it  is not a palindrome number : "<<c;
    }

    return 0;
}
