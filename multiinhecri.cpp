#include<iostream>

using namespace std;

class Number{
    protected:
    int a;

    public:
    void seta(){
        cout<<"enter a";
        cin>>a;
    }
};

class Number1{
    protected:
    int b;

    public:
    void setb(){
        cout<<"enter b";
        cin>>b;
    }
};

class derive:public Number, public Number1{
    public:
    void product(){
        cout<<"get a and b"<<a*b;
    }
};
int main(){
    class derive c;
    c.seta();
    c.setb();
    c.product();
    return 0;
}