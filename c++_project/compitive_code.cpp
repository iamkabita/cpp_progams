#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,i,j,k,r=0;
	cout<<"Enter a number ";
	cin>>n;
	for(i=1;i<=2*n-1;i++)
	{
		if(i<=n)
		{
			r++;
		}
		else
		{
			r--;
		}
		
		k=n;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=r&&j<=(2*n)-r)
			{
				cout<<k<<" ";
			}
			else
			{
				if(j>n)
				{
					k++;
					cout<<k<<" ";
				}
				else
				{
					cout<<k<<" ";
					k--;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
