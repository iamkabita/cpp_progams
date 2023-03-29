#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int i,j,r;
    cout<<"Enter number of row"<<endl;
    cin>>r;
    for(i=1;i<=r;i++){
        for(j=1;j<=r;j++){
            if(j<=i){
                cout<<j<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}