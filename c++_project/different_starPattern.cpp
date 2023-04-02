#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"Enter number of rows";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    if(i%2 !=0)
		{
			cout<<"**********";
		}
		else
		{
		    cout<<" **********";
		}
		cout<<endl;
		cout<<endl;			
	}
	return 0;
}
