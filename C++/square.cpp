# include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter value of n here: ";
cin>>n;
for(int i=1;i<=n;i++){ //outer(row)
    for(int j=1;j<=n;j++){ //inner(column)
        cout<<j <<" ";
    }
    cout<<endl;
}

}