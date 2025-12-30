# include<iostream>
using namespace std;
int main(){
  int arr[2][3]={{78,54,32},{10,5,25}};
  for (int i=0; i<2; i++){
    for (int j=0; j<3; j++){
      int count=0;
      for (int k=1 ;k<=arr[i][j];k++){
        if (arr[i][j]%k==0){
          count ++;
        }
      }
      if (count==2){
        cout<<"It is prime number : "<<arr[i][j];
      }
      else{
        cout<<"It is composite number : "<<arr[i][j];
      }
      cout<<endl;
        
    }
   
  }
  return 0;
}