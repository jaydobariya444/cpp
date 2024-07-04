#include<iostream>

using namespace std;

class base{
    protected:
    int a;
    public:
    void seta(){
        cout<<"enter a";
        cin>>a;
    }
};
class derived:public base{
    protected:
    int b;
    public:
    void setb(){
        cout<<"enter b";
        cin>>b;
    }
    void sum(){
        cout<<"sum of the a and b"<<a+b<<endl;
    }
};
class derived2:public base{
    protected:
    int c;
    public:
    void setc(){
        cout<<"enter c";
        cin>>c;
    }
    void sum(){
        cout<<"sum of the a and c"<<a+c<<endl;
    }
};
int main(){
    class derived obj;
    obj.seta();
    obj.setb();
    obj.sum();
    return 0;

}