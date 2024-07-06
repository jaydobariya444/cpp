#include<iostream>

using namespace std;

class Bank{

    protected:
    int pin;
    int Account_number;
    int balance = 5000;

    public:
    char email;
    int amount;
    
    
    

    void account(){
        cout<<"ENTER THE ACCOUNT NUMBER:";
        cin>>Account_number;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"CREATE YOUR PIN NUMBER:";
        cin>>pin;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"***************THE ACCOUNT DETAILS:******************"<<endl<<endl;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"ENTER THE ACCOUNT NUMBER:"<<Account_number;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"ENTER THE ACCOUNT BALANCE:"<<balance;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }

    void showdata(){

        cout<<"ACCOUNT NUMBER:"<<Account_number;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout<<"initial balance:"<<balance;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    }

    void withdraw(){

        cout << "------WELLCOME TO SBI ------"<<endl<<endl;
        
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout << "----ENTER YOUR ATM CARD----"<<endl<<endl;
        
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout<<"ENTER ACCOUNT NUMBER:=";
        cin>>Account_number;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout<<"ENETR ATM PIN:=";
        cin>>pin;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout<<"ENTER THE WITHDRAW AMOUNT $:=";
        cin>>amount;
        cout << "---------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        if(amount>0){
            balance -= amount;
              cout<<"YOUR ACCOUNT BALANCE IS $:="<<balance<<endl<<endl;  
        }
        else
            {
                cout<<"Enter minimum value 1rs:="<<endl<<endl;
            }
    
    };
    

    void deposite(){
        
        cout << "------WELLCOME TO SBI ------"<<endl<<endl;
        
        cout << "----ENTER YOUR ATM CARD----"<<endl<<endl;
         
        cout<<"ENTER ACCOUNT NUMBER:=";
        cin>>Account_number;
        cout<<"ENETR ATM PIN";
        cin>>pin;
        cout<<"ENTER DEPOSITE AMOUNT $:=";
        cin>>amount;
            if(amount>0){
                balance+=amount;
                  cout<<"YOUR ACCOUNT BALANCE IS:="<<balance<<endl<<endl;  
            }
            else
            {
                cout<<"Enter minimum value 1rs:="<<endl<<endl;
            }
    }

    void exit()
    {
        cout << "------THANKS FOR VISIT------";
    } 
};

int main(){
    class Bank A;
    
        int number;
        do
        {
            cout << "1 : ACOUNT "<<endl<<endl;
            cout << "2 : CASH WITHDRAWAL "<<endl<<endl ;
            cout << "3 : CASH DEPOSIT"<<endl<<endl ;
            cout << "4 : EXIT"<<endl<<endl ;
            cout << "select number : " ;
            cin >> number;

                switch (number)
                {
                case 1:
                    A.account();
                    break;


                case 2:
                    A.withdraw();
                    break;

                case 3:
                    A.deposite();
                    break;

                case 5:
                    A.exit();
                    break;
                }

        }
                while(number!=5);

                return 0;


}       