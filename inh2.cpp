#include<iostream>
using namespace std;

class student{
    protected:
    int admno;
    char sname[20];
    float eng,math,sci;

    

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
        int ctotal(){
        return eng+math+sci;
    }
    

};

    class result:public student{
        public:
    int  total = 0;
    
    void display(){
        total=ctotal();
        cout<<"total is"<<total;
    }
};

int main()
{
    class result pr;
    pr.getdata();
    pr.display();
    return 0;
}