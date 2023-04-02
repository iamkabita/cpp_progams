#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,n;
	for(i=1;i<=12;i++)
	{
		for(j=1;j<=12;j++)
		{
			if(i%2 !=0)
			{
				if(i==1||i==5||i==9)
				{
					if(j==12)
					{
						cout<<" ";
					}
					else
					{
						cout<<"*";
					}
				}
				else if(j==1)
				{
					cout<<" ";
				}
				else
				{
					cout<<"*";
				}
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
