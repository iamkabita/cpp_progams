#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,k,n;
	cout<<"Enter number of rows"<<endl;
	cin>>n;
	for(i=n;i>=1;i--)
	{
		k=1;
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				if(k==1)
				{
					k--;
					cout<<k<<" ";
				}
				else
				{
					k++;
					cout<<k<<" ";
				}
			}
			else if(k==1)
			{
				cout<<k<<" ";
				k--;
			}
			else
			{
				cout<<k<<" ";
				k++;
			}
		}
		cout<<endl;
	}
	return 0;
}
