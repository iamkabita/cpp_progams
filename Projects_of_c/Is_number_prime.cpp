#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter a number ";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n % i==0)
		{
			break;
		}
	}
	if(i==(n/2)+1)
	{
		cout<<"Prime number";
	}
	else
	{
		cout<<"Not Prime number";
	}
	return 0;	
}
