#include<iostream>

using namespace std;
class bank{
    public:
void intres(int p, int r, int n){

     int intres1 = p*r*n/100;

    cout<<intres1;


}
};

int main(){

    bank b;
    b.intres(100,2,2);

    return 0;

}