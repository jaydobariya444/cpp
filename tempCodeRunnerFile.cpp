#include<iostream>

using namespace std;

class large{

    friend void number(large a);
    int x,y,z;

    public:

    void getdata(int a, int b, int c){
        x=a,y=b,z=c;
   }
};

void number(large a){


    if(a.x>a.y&&a.x>>a.z){
            cout<<"x is large number";
        }
       else if(a.y>a.x&&a.y>>a.z){
            cout<<"y is large number";
        }
        else{
            cout<<"z is large number";
        }
}

int main()
{
    large t;
    t.getdata(15,20,50);
    number(t);
    return 0;
}