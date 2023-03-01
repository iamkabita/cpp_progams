#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int no,n,count=0,a=1,sum=0,x;
	cout<<"Enter a number\n";
	cin>>no;
	n = no;
	while(n!=0)
	{
		n = n/10;
		count++;
	}
	n = no;
	while(n!=0)
	{
		x = n % 10;
		n = n/10;
		for(int i=1;i<=count;i++)
		{
			a = a*x;
		}
		sum = a + sum;
		a=1;
	}
	if(sum == no)
	{
		cout<<"It is a armstrong number";
	}
	else
	{
		cout<<"It is not a armstrong number";
	}
	getch();
}
