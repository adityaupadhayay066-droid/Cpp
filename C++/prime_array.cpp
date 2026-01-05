// // WAP to check the element present in the array is prime or composite

# include<iostream>
using namespace std;
int main (){
  int arr[5] = {1,2,3,4,5};
  for (int i=0; i<5; i++){
    int count=0;
    for (int k=1; k<=arr[i]; k++){
      if (arr[i]%k==0){
        count++;
      } 
    }
    if (count==2){
      cout<<"It is prime number : "<<arr[i];
    }
    else{
      cout<<"It is composite number : "<<arr[i]; 
    }
    cout<<endl;
    
  }
  
  return 0;
}