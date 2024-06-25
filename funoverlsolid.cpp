#include<iostream>

using namespace std;

    class solid{
        
        public:
    void Test(int a){
        cout<<"volume of square:-"<<a*a*a<<endl;
    } 
    void Test(double b,int h,int x){
        
        cout<<"volume of cubiod:-"<<h*b*x<<endl;
    }
    void Test(double a, int b){
        
        cout<<"volume of cone:-"<<0.33*3.14*a*a*b<<endl;
    }   
    
    void Test(double a){
    
        cout<<"volume of sphere:-"<<1.33*3.14*a*a*a<<endl;
    }

};

    int main(){
        class solid t;
        t.Test(50);
        t.Test(5.05,10);
        t.Test(6.07);
        t.Test(8,10.05);
        return 0;
    }