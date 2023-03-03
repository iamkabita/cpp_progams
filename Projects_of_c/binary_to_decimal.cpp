#include<iostream>
#include<conio.h>
using namespace std;
//Binary to decimal
int main()
{
	int n,no,count=0,i,x,sum=0,t=1;
	cout<<"Enter a binary number  ";
	cin>>no;
	n=no;
	while(n>0)
	{
		n = n/10;
		count++;
	}
	n=no;
	for(i=1;i<=count;i++)
		{
			x = n %10;
			sum = sum + (x*t);
		    t =t*2;
		    n = n/10;
		}
	cout<<"Decimal number of "<<no<<" is "<<sum;
	getch();

		
	
	
}
