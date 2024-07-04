#include<iostream>

using namespace std;

class base{
    protected:
    int a;
    public:
    void seta(){
        cout<<"enter a:=";
        cin>>a;
    }
};

class derived:public base{
    protected:
    int b;
    public:
    void setb(){
        cout<<"enter b:=";
        cin>>b;
    }
    void sum(){
        cout<<"sum of the a and b:="<<a+b<<endl;
    }
};

class base1{
    protected:
    int c;
    public:
    void setc(){
        cout<<"enter c:=";
        cin>>c;
    }
};

class derived2:public derived,public base1{
    protected:
    int d;
    public:
    void setd(){
        cout<<"enter d:=";
        cin>>d;
    }
    void sum(){
        cout<<"sum of the a:= and d:="<<a*b*c*d<<endl;
    }
};

int main(){
    class derived2 obj;
    obj.seta();
    obj.setb();
    obj.setc();
    obj.setd();
    obj.sum();
    return 0;

}