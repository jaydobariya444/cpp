#include<iostream>

using namespace std;

class Test{
    private:

    int a,b,h

    public:
    Test(int a){
        cout<<"area of squre"<<a*a<<endl;
    } 
    Test(int b,int h){
        cout<<"area of tringle"<<1/2(b*h)<<endl;
    }
    Test(float r){
        cout<<"area of circle"<<(r*r)*3.14<<endl;
    }   
    Test(int l, int b, int h){
        cout<<"area of cuboid"<<l*b*h<<endl;
    }

};

int main(){
    Test obj(10),obj1(10,20),obj2(9.4),obj3(10,20,30);
    return 0;
}