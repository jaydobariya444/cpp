#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char input[1000];
    ofstream os;
    os.open("xy1.txt");

    cout << "display enter your name : " << endl;
    cin.getline(input, 100);
    os << input << endl;

    cout << "enter contact numper : ";
    cin>> input;
    cin.ignore();
    os << input << endl;
    os.close();

    ifstream is;
    string line;
    is.open("xy1.txt");

    cout << "read txt file : " << endl;
    while (getline(is, line))
    {
        cout << line << endl;
    }
    is.close();

    return 0;
}