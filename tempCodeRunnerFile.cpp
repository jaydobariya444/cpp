#include<iostream>

using namespace std;

class Bank{

    protected:
    int pin;
    int Account_number;
    int balance;

    public:
    char name;
    int mobile_number;
    int cash;
    char email;
    int amount;
    

    void account(){
        cout<<"ENTER THE NAME:"<<endl;
        cin>>name;
        cout<<"ENTER THE MOBILE NO.:"<<endl;
        cin>>mobile3_number;
        cout<<"ENTER YOUR E-MAIL ADDRESS:"<<endl;
        cin>>email;
        cout<<"CREATE YOUR PIN NUMBER:"<<endl;
        cin>>pin;
    }

    void deposite(){

        if(enteredpin==pin){
            if(amount>0){
                balance+=amount;
                  cout<<"your deposite amount is:"<<balance<<endl;  
            }else
            {
                cout<<"Enter minimum value 1rs";
            }
        }
        else{
            cout<<"incorrect pin"; 
        }
    }

};

int main(){
    class Bank A;
    A.account();
    A.deposite();
    return 0;
}