#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j,r;
    cout<<"Enter row number"<<endl;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<r-i+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
