#include<iostream>

using namespace std;

int main(){

    int mt,py,ch,total;
    float per;

    cout<<"enter mark of mt:-";
    cin>>mt;

    cout<<"enter mark of py:-";
    cin>>py;

    cout<<"enter mark of ch:-";
    cin>>ch;

    total=ch+py+mt;

    cout<<"total :- "<<int(total)<<endl;

    per=total/3;

    cout<<"percentage :- "<<float(per)<<endl;

    return 0;

}