#include<iostream>

using namespace std;

class large{

    friend void number(large a);
    int x,y;

    public:

    void getdata(int a, int b){
        x=a,y=b;
   }
};

void number(large a){


    if(a.x>a.y){
            cout<<"x is large number";
        }
        else{
            cout<<"y is large number";
        }
}

int main()
{
    large t;
    t.getdata(15,20);
    number(t);
    return 0;
}