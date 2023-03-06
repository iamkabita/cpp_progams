#include<iostream>
#include<conio.h>
using namespace std;
//Write a c++ program to convert number in character.
int main()
{
	int x,n,i,d=0,number,count,t=1,j;
	cout<<"Enter number\n";
	cin>>number;
	n=number;
	while(n>0)
	{
		n = n/10;
		d++;
	}
	count=d;
	for(j=1;j<=d-1;j++)
	{
		t =t*10;
	}
	n=number;
	cout<<"Number in Character - ";
	for(i=1;i<=count;i++)
	{
		x= n/t;
		if(x==1)
		{
			cout<<"One ";
		}
		else if(x==2)
		{
			cout<<"Two ";
		}
		else if(x==3)
		{
			cout<<"Three ";
		}
		else if(x==4)
		{
			cout<<"Four ";
		}
		else if(x==5)
		{
			cout<<"Five ";
		}
		else if(x==6)
		{
			cout<<"Six ";
		}
		else if(x==7)
		{
			cout<<"Seven ";
		}
		else if(x==8)
		{
			cout<<"Eight ";
		}
		else if(x==9)
		{
			cout<<"Nine ";
		}
		else 
		{
			cout<<"Zero ";
		}
	    n= n%t;
	    t= t/10;
		
	}
	getch();
	return 0;
}
