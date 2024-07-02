#include<iostream>

using namespace std;

class base{

    int a=10;
    int b=20;

    protected:
    int d=20;

    public:
    int c=0;

    int sum(){
        return a+b;
    }

};

class derive:public base{
    public:
    int total = 0;
    
    void display(){
        total = sum();
        cout<<"total is"<<total<<c<<d;
    }
};

int main(){
    class derive ob;
    ob.display();
    return 0;
}