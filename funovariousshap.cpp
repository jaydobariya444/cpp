#include<iostream>

using namespace std;

    class various{
        
        public:

        void test(int a){
            cout<<"volume of square:= "<<a*a*a<<endl;
        }
        void Test(double b,int h){
        
            cout<<"area of tringle:-"<<(b*h)/2<<endl;
        }
        void Test(double r){
        
            cout<<"area of circle:-"<<(r*r)*3.14<<endl;
        }   
    
        void Test(int l,double w){
    
            cout<<"area of rectangle:-"<<(l*w)<<endl;
        }
    };

    int main(){
        various t;
        t.Test(50);
        t.Test(5.05,10);
        t.Test(6.07);
        t.Test(8,10.05);
        return 0;
    }