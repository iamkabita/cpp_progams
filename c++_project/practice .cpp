#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,r,k;
	cout<<"Enter number of row  ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=2*r-1;j++)
		{
			k=1;
			if(j>=r+i&&j<=r-i)
			{
				cout<<k<<" ";
			}
			else
			{
				cout<<"  ";
			}
			k++;			
		}
		cout<<endl;
	}
	return 0;
}

