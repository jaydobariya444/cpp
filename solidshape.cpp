#include<iostream> 
using namespace std; 

class Test{
    
    public:
    Test(int a){
        cout<<"volume of square:-"<<a*a*a<<endl;
    } 
    Test(double b,int h,int x){
        
        cout<<"volume of cubiod:-"<<h*b*x<<endl;
    }
    Test(double a, int b){
        
        cout<<"volume of cone:-"<<0.33*3.14*a*a*b<<endl;
    }   
    
    Test(double a){
    
        cout<<"volume of sphere:-"<<1.33*3.14*a*a*a<<endl;
    }

};

int main(){
    Test obj(10),obj1(50.50,20,10),obj2(12.0,15),obj3(20.0);
    return 0;
}