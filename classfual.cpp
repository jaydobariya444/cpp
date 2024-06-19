#include<iostream>

using namespace std;

class cpp{

    private:

    int flightnumber;
    char destination[500];
    float distance,fual;
    float calcfual(int flightnumber, float fual, float distance);

    public:
    void FEEDINFO(){

        cout<<"enter flightnumber:-";
        cin>>flightnumber;
        cout<<"Enter destination:-";
        cin>>destination;
        cout<<"Enter distance:-";
        cin>>distance;
        // cout<<"Enter fuel:-";
        // cin>>fuel;  

        if(distance<=1000){
            cout<<"fual=500";
        }
        else if(distance>1000&&distance<=2000){
            cout<<"fual = 1100";
        }
        else{
            cout<<"fual=2200";
        }

    }

    void SHOWINFO(){

        cout<<"flightnumber:-"<<flightnumber<<endl;
        cout<<"destination:-"<<destination<<endl;
        cout<<"distance:-"<<distance<<endl;
        // cout<<"fuel:-"<<fuel<<endl;
        cout<<"calculate fual:-"<<calcfual(flightnumber,fual,distance);

        if(distance<=1000){
            cout<<"fual=500";
        }
        else if(distance>1000&&distance<=2000){
            cout<<"fual = 1100";
        }
        else{
            cout<<"fual=2200";
        }

    }
};
float cpp:: calcfual(int flightnumber, float fual, float distance){
    
}

int main(){

    class cpp tour;
    tour.FEEDINFO();
    tour.SHOWINFO();
    return 0;
}