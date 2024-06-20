#include<iostream>

    using namespace std;

        class Xerox{

        private:
            int bookno;
            int copy;
            char booktype[500];
            float price=3;
            float tcost;
            float totalcost(int copy);

        public:

            void INPUT(){

                cout<<"enter book no:-";
                cin>>bookno;
                cout<<"enter book type:-";
                cin>>booktype;
                cout<<"enter number of copies:-";
                cin>>copy;
                totalcost(copy);
            }

            void PURCHASE(){

                cout<<"book no:-"<<bookno<<endl;
                cout<<"book type:-"<<booktype<<endl;
                cout<<"number of copies:-"<<copy<<endl;  
                cout<<"totalcost:-"<<tcost;              
            }
        };

        float Xerox:: totalcost(int copy)
        {
            tcost = price*copy;
        }

        int main(){

            class Xerox t;
            t.INPUT();
            t.PURCHASE();
            return 0;

        }