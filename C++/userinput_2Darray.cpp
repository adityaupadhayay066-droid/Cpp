# include<iostream>
using namespace std;
int main (){
  int arr[2][3];
  for (int i=0; i<2; i++){
    for (int j=0; j<3; j++){
      cout<<"Enter the value of array here : ";
      cin>>arr[i][j];
      if (arr[i][j]%2==0){
        cout<<"It is even number : "<<arr[i][j]<<endl;
      }
      else{
        cout<<"It is odd number : "<<arr[i][j]<<endl;
      }
    }
      
  }
}