# include<iostream>
using namespace std;
class Bank{
    public:
    long long int  BankAccount;
    string user_name;
    string address;
    public:
    Bank (long long int  b , string u, string a){
        BankAccount=b;
        user_name= u;
        address= a;
    }
class memory {
    private:
    int Balance;
    int total_amount;
    public:
    memory(int Balance, int total_amount ){
        Balance = B;
        total_amount = t;

    }
}
void show (){
    cout<<"Left balance"<<Balance<<endl;
    cout<<"Total amount "<<total_amount<<endl;

}

};
int main (){
    Bank b(250314100146, "Aditya", "Jamshedpur");
    cout<<b.BankAccount<<endl<<b.address<<endl<<b.user_name<<endl;
}