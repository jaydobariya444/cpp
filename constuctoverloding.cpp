#include<iostream> 
using namespace std; 

class Test{
    
    public:
    Test(int a){
        cout<<"area of squre        :-"<<a*a<<endl;
    } 
    Test(double b,double h){
        // float b,h;
        cout<<"tringle              :-"<<(b*h)/2<<endl;
    }
    Test(double r){
        // float r;
        cout<<"circle               :-"<<(r*r)*3.14<<endl;
    }   
    Test(int l, int b, int h){
        cout<<"cuboid               :-"<<l*b*h<<endl;
    }
    Test(int l,double w){
        // float w;
        cout<<"rectangle            :-"<<(l*w)<<endl;
    }
    Test(double a,char b){
        // float a;
        cout<<"area of cube         :-"<<6*(a*a)<<endl;
    } 
    Test(double h, int b,char c){
        // float h;
        cout<<"area of Parallelogram:-"<<b*h<<endl;
    }


};

int main(){
    Test obj(10),obj1(50.50,20.20),obj2(12),obj3(10,20,30),obj4(10,20.20),obj5(20.5,'e'),obj6(40.1,50,'a');
    return 0;
}