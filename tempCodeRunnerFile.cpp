#include<iostream>
using namespace std;

class cricket
{
    protected:
    int bcode;
    char bname[20];
    
    float batavg;
    
    
    public:
    void readdata()
    {
        cout<<"Enter Batsman Code: ";
        cin>>bcode;
        cout<<"Enter Batsman Name: ";
        cin>>bname;
    }       
};

class cricket1:public cricket{

    protected:
    int innings, notout, runs;
    
    public:
    void readdata1()
    {
        cout<<"Enter Innings: ";
        cin>>innings;   
        cout<<"Enter Not Out: ";
        cin>>notout;
        cout<<"Enter Runs: ";
        cin>>runs;
    }
    
};

    class derive:public cricket1{
        public:
        
        float batavg;
        void display(){
            batavg=runs/(innings-notout);
            cout<<"average is:="<<batavg;
    }
};

int main()
{
    class derive pr;
    pr.readdata();
    pr.readdata1();
    pr.display();
    return 0;
}