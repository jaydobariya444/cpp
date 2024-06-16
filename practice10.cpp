#include<iostream>

using namespace std;

int main(){

    int i,j,t=0;

    for(i=0; i<=10; i++){
        cout<<int(i)<<endl;
        t+=i;
        t=t+i;
    }

    cout<<int(t);

    return 0;

}