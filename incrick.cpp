#include<iostream>
using namespace std;

class cricket
{
    protected:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;
    
    
    public:
    void readdata()
    {
        cout<<"Enter Batsman Code: ";
        cin>>bcode;
        cout<<"Enter Batsman Name: ";
        cin>>bname;
        cout<<"Enter Innings: ";
        cin>>innings;   
        cout<<"Enter Not Out: ";
        cin>>notout;
        cout<<"Enter Runs: ";
        cin>>runs;
    }
    int calcavg(){
        return runs/(innings-notout);
    }
};

    class derive:public cricket{
        public:
        float batavg;
    void display(){
        batavg=calcavg();
        cout<<"average is:="<<batavg;
    }
    };

int main()
{
    class derive pr;
    pr.readdata();
    pr.display();
return 0;
}