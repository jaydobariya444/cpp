#include<iostream>

using namespace std;

class cricket{

    private:

    int bcode,innings,notout,runs;
    char bname;
    float batavg(int innings, int notout, int runs);
    

    public:

    void readdata(){

        cout<<"enter bcode:-";
        cin>>bcode;
        cout<<"enter bname-";
        cin>>bname;
        cout<<"enter innings-";
        cin>>innings;
        cout<<"enter notout-";
        cin>>notout;
        cout<<"enter runs-";
        cin>>runs;        
    
    }
    void calcavg(){

        cout<<"batting code    \t:-"<<bcode<<endl;
        cout<<"batting name    \t:-"<<bname<<endl;
        cout<<"innings         \t:-"<<innings<<endl;
        cout<<"notout          \t:-"<<notout<<endl;
        cout<<"runs            \t:-"<<runs<<endl;
        cout<<"bat average     \t:-"<<batavg(int innings, int notout, int runs)<<endl;
        
    }

};

float cricket:: batavg(int innings, int notout, int runs){
    return runs/(innings-notout);
}

int main(){

    class cricket st;
    st.readdata();
    st.calcavg();


    return 0;
}