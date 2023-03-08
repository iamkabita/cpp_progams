#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,r;
	char alpha;
	cout<<"Enter number of row ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		alpha ='A';
		for(j=1;j<=2*r-1;j++)
		{
			if(j>=r+1-i&&j<=r-1+i)
			{
				cout<<(char)alpha;
		 	if(j<r)
				{
					(char)alpha++;
				}
				else
				{
					(char)alpha--;
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
	return 0 ;
}
