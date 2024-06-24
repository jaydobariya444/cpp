#include<iostream>

using namespace std;

class Test{

    private:    
    int testcode, nocandidate, CenterReqd;
    char description[100000];
    float calcntr(int nocandidate,int testcode,int  CenterReqd);

    public:
    Test(){

        cout<<"enter testcode:-";
        cin>>testcode;
        cout<<"Enter nocandidate:-";
        cin>>nocandidate;
        cout<<"Enter CenterReqd:-";
        cin>>CenterReqd;
        cout<<"Enter description:-";
        cin>>description;   
        
    } 

    ~Test(){

        cout<<"enter testcode:-";
        cin>>testcode;
        cout<<"Enter nocandidate:-";
        cin>>nocandidate;
        cout<<"Enter CenterReqd:-";
        cin>>CenterReqd;
        cout<<"Enter description:-";
        cin>>description;   
        
    } 

    void DISPTEST(){

        cout<<"testcode"<<testcode<<endl;
        cout<<"non candiadte"<<nocandidate<<endl;
        cout<<"CenterRequired"<<CenterReqd<<endl;
        cout<<"descriotion"<<description<<endl;
        cout<<"calculate "<<calcntr(nocandidate,testcode,CenterReqd);
        
    
    }
};

float Test:: calcntr(int nocandidate, int testcode, int CenterReqd){
    return (nocandidate/100+1);
}
int main(){

    class Test t;
    t.DISPTEST();

    return 0;
}