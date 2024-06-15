#include<iostream>

using namespace std;

int maain(){

    int a,b;

    cout<<"enter number of a:-";
    cin>>a;

    cout<<"enter number of b:-";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"value of a:-"<<int(a)<<endl;
    cout<<"value of b:-"<<int(a);

    return 0;

}