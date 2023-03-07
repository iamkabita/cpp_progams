#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,r,d;
	cout<<"Enter number of row  ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		d =1;
		for(j=1;j<=2*r-1;j++)
		{
			if(j>=r+1-i&&j<=r-1+i)
			{
				cout<<d;
				if(j < r)
			    {
				    d++;
			    }
			   else
			    {
				    d--;
			    }
			}
			else
			{
				cout<<" ";
			}
			
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
