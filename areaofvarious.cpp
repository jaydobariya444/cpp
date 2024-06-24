#include<iostream> 
using namespace std; 

class Test{
    
    public:
    Test(int a){
        cout<<"area of square"<<a*a<<endl;
    } 
    Test(double b,int h){
        
        cout<<"area of tringle:-"<<(b*h)/2<<endl;
    }
    Test(double r){
        
        cout<<"area of circle:-"<<(r*r)*3.14<<endl;
    }   
    
    Test(int l,double w){
    
        cout<<"area of rectangle:-"<<(l*w)<<endl;
    }

};

int main(){
    Test obj(10),obj1(50.50,20),obj2(12.0),obj3(10,20.0);
    return 0;
}