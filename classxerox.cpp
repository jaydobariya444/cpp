#include<iostream>

    using namespace std;

        class Xerox{

        private:
            int bookno,copy=3;
            char booktype[500];
            float price;
            float totalcost(int bookno,int booktype, float price);

        public:

            void INPUT(){

                cout<<"enter book no:-";
                cin>>bookno;
                cout<<"enter book type:-";
                cin<<booktype;
                cout<<"enter number of copies:-";
                cin>>copy;
                
            }

            void PURCHASE(){

                cout<<"book no:-"<<bookno<<endl;
                cout<<"book type:-"<<booktype<<endl;
                cout<<"number of copies:-"<<copy<<endl;  
                cout<<"totalcost:-"<<totalcost(bookno,booktype,price);              
            }
        }

        float Xerox:: totalcost(int bookno,int booktype,float price)
        {
            totalcost = copy*price;
        }

        int main(){

            class Xerox t;
            t.INPUT();
            t.PURCHASE();
            return 0;

        }