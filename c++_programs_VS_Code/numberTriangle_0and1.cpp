#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j,r;
    cout<<"Enter number of rows";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j % 2==0)
            {
                cout<<"0 ";
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}