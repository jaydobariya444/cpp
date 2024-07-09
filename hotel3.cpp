#include <iostream>


using namespace std;

class Hotel {
public:
    char pname;
    int qty, rate;

    void getProduct();
    void displayProduct();
};

void Hotel::getProduct() {
    cout << "Enter Product Name: ";
    cin >> pname;
    cout << "Enter Product Price: ";
    cin >> rate;
    cout << "Enter Qty: ";
    cin >> qty;
}

void Hotel::displayProduct() {
    cout << " " << pname << " " << rate << " " << qty << " " << qty * rate << "\n";
}

int main() {
    
    int choice, total = 0;
    Hotel h;
    int i;

    do {
        cout << "\n--------------Billing System------------";
        cout << "\n 1. Enter Product";
        cout << "\n 2. Display Product";
        cout << "\n 3. Exit";
        cout << "\n-----------------------------------------";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (i = 0; i < 5; i++)
                    h[i].getProduct();
                break;
            case 2:
            
                cout << "\n-----------------------------------------\n";
                cout << "Name Rate Qty Amount\n";
                cout << "-----------------------------------------\n";
                for (i = 0; i < 5; i++) {
                    h[i].displayProduct();
                    total += (h[i].qty * h[i].rate);
                }
                cout << "-----------------------------------------\n";
                cout << "Total Amount: " << total;
                break;
                }
    } while (choice != 3);

    return 0;
}