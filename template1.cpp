#include<iostream>
using namespace std;

template <class T>
void desplay(T t1)
{
    cout<<"Display template :"<<t1<<endl;
}
template<class x,class y>
void Desplay(x a,y b)
{
    cout<<"desplay template : "
        <<a<<"\t"
        <<b<<endl;
}

template<class t>
t sum(t x,t y)
{
    return x+y;
}

int main()
{
    desplay(200);
    desplay(12.56);
    desplay('c');

    Desplay('a',1.25);
    Desplay('x',25);
    Desplay(25,1.25);

    cout<<sum(1,2)<<endl;
    cout<<sum(25.5,15.00);
return 0;
}