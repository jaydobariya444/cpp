#include<iostream>

using namespace std;

class complex{

    int x;
    int y;

        public:
        void getdata(int a, int b){
            int x=a;
            int y=b;
        }
        void display(){
            cout<<"value of x"<<x<<endl;
            cout<<"value of y"<<y<<endl;
        }
        void operator-(){
            x=-x;
            y=-y;
        }
};
int main(){
    complex s;
    s.getdata(4,-5);
    s.display();
    cout<<"after the function call"<<endl;
    -s;
    s.display();
    return 0;
}