#include<iostream>

using namespace std;

int main(){

    char a='A';

    do
    {
        cout<<char(a)<<int(a)<<endl;
        a++;
    } while (a<='z');
    
    return 0;

}