# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n here: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){ // print right side of pyramid 
            cout<<j;
        }
        for(int j=i;j>0;j--){ //print right side of pyramid
            cout<<j;
        }
        cout<<endl;
    }
}