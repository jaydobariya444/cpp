#include<iostream>

using namespace std;

int main(){

    int i,j;
    int arr[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<"enter element:-";
            cin>>arr[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(arr[i][j]==0){
                cout<<"\t";
            }
            else{
                cout<<arr[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}