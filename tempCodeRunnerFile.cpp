#include<iostream>
using namespace std;

class hotel{

    public:
        int qty;
        int amount = 110;
        int bill;
        void printab(){
            cout<<"ENTER QTY : ";
            cin>>qty;
        }

        void cal(){
            bill = amount * qty;
            cout<<"TOTAL BILL : "<<bill;
        }
};
int main(){

   int number;

    hotel h;

    cout<<"\t******** HOTEL SKILLQODE ********"<<endl<<endl;

      cout<<"\t ******** FOOD MENU ********"<<endl<<endl;

    cout<<" NO.          FOOD MENU           PRICE"<<endl<<endl;

    cout<<" 1.         GUJARATI THALI           110/-"<<endl;

    // cout<<" 2.         PUNJABI THALI            200/-"<<endl;
    // cout<<" 3.         VEG MANCHURIAN           100/-"<<endl;
    // cout<<" 4.          MANCHOW SOUP            80/-"<<endl;
    // cout<<" 5.           GREEN SOUP             60/-"<<endl;
    // cout<<" 6.             PIZZA                90/-"<<endl;
    // cout<<" 7.          CHEESE PIZZA            120/-"<<endl;
    // cout<<" 8.         MAXICAN PIZZA           170/-"<<endl;
    // cout<<" 9.         TIKKA PIZZA             160/-"<<endl;
    // cout<<" 10.            PASTA                100/-"<<endl;
    // cout<<" 10.       SKILLQODE  SPACIAL        250/-"<<endl<<endl;
    


cout<<"***************************************************************************"<<endl;

   cout << "select number : ";
   cin >> number;

//     cout<<" NO.        COID  DRINKS            PRICE"<<endl<<endl;

//     cout<<" 14.         THUMBS UP                60/-"<<endl;
//     cout<<" 15.         COCA COLA                50/-"<<endl;
//     cout<<" 16.           PEPSI                  40/-"<<endl;
//     cout<<" 17.           FANTA                  50/-"<<endl;
//     cout<<" 18.           MANGO                  50/-"<<endl;
//     cout<<" 19.           SOSIYO                 60/-"<<endl<<endl;

// cout<<"***************************************************************************"<<endl;

//     cout<<" NO.          ICE CREAM(1 CUP)         PRICE"<<endl<<endl;

//     cout<<" 20.             RAJBHOG                90/-"<<endl;
//     cout<<" 21.            KAJU BADAM              120/-"<<endl;
//     cout<<" 22.              VENILA                50/-"<<endl;
//     cout<<" 23.         SKILLQODE  SPACIAL         200/-"<<endl;

// cout<<"***************************************************************************"<<endl;
         
//     cout<<" NO.            DRINKS             PRICE"<<endl<<endl;

//     cout<<" 24.              TEA                50/-"<<endl;
//     cout<<" 25.             COFFEE              70/-"<<endl;
//     cout<<" 26.            BISLERI              50/-"<<endl<<endl;


do{
    switch (number)
    {
    case 1:
        h.printab();
        h.cal();
        break;
    }
}while (number!=1);

return 0;
}