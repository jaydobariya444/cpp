#include<iostream>

using namespace std;

int main(){

    int i, sum=0;

    for(int i=0; i<=10; i++){
        sum = sum+i;
        cout<<int(i)<<endl;
    }
    cout<<int(sum);

    return 0;

}