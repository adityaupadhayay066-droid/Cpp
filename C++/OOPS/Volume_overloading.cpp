# include<iostream>
using namespace std;
class Volume{
    public:
    float cube(float a){
        return a*a*a; 
    }
    float cone(int r, int h){
        return (3.14*r*r*h)/3;
    }

};
int main (){
    Volume v;
    cout<<"Volume of Cube is : "<<v.cube(25.32)<<endl;
    cout<<"Volume of Cone is : "<<v.cone(78.56,23.20)<<endl;
}

