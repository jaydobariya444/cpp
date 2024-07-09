#include <iostream>
using namespace std;

class HOTEL
{

public:
    int dish;
    char choose;
    int qty;
    int bill;
    float dishprice;
    char slip;
    

    void menu()
    {

        cout << "ENTER FOOD : ";
        cin>>dish;

        cout << "ENTER QUNTITY OF BUYING FOOD : ";
        cin >> qty;

        bill = dishprice * qty;
        cout<<"TOTAL BILL AMOUNT : "<<bill<<endl;
    }

};

int main()
{

    HOTEL A;

    A.menu();

    
    return 0;
}