# include<iostream>
using namespace std;
class shape{
    public:
    int area(int side){
        return side*side;
    }
    int area(int length, int breath){
        return length*breath;
    }
};
int main (){
    shape s;
    cout<<"Area of square : "<<s.area(20)<<endl;
    cout<<"Area of rectangle : "<<s.area(20,80)<<endl;
}