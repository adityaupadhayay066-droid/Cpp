#include <iostream>
using namespace std;

int sum(int arr[], int n) {
   long long  int evenSum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
    }
    return evenSum;
}

int sum(int arr[], int n, bool oddFlag) {
  long long   int oddSum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            oddSum += arr[i];
    }
    return oddSum;
}

int main() {
    int n=15;
    int arr[]={12,95,96,56,75};
    
    cout << "Sum of even elements = " << sum(arr, n) << endl;
    cout << "Sum of odd elements  = " << sum(arr, n, true) << endl;

    return 0;
}