#include<iostream>

using namespace std;

class student{

    private:

    int admno;
    char sname[20];
    float eng,math,sci,total;
    float ctotal(int eng, int math, int sci);

    public:
    void getdata(){

        cout<<"enter admin no:-";
        cin>>admno;
        cout<<"enter sname-";
        cin>>sname;
        cout<<"enter english mark:-";
        cin>>eng;
        cout<<"enter math mark:-";
        cin>>math;
        cout<<"enter science mark:-";
        cin>>sci;
    
    }
    void showdata(){
        cout<<"admin no    \t:-"<<admno<<endl;
        cout<<"sname       \t:-"<<sname<<endl;
        cout<<"english mark\t:-"<<eng<<endl;
        cout<<"maths mark  \t:-"<<math<<endl;
        cout<<"science mark\t:-"<<sci<<endl;
        cout<<"total       \t:-"<<ctotal(eng,math,sci);
        
    }

};

float student:: ctotal(int eng, int math, int sci){
    return eng+math+sci;
}

int main(){

    class student st;
    st.getdata();
    st.showdata();


    return 0;
}