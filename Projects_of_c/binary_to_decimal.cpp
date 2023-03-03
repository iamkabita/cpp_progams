#include<iostream>
#include<conio.h>
using namespace std;
//Binary to decimal(Function)
int binary(int no)
{
	int n,count=0,i,x,sum=0,t=1;
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
	return (sum);
}

int main()
{
	int no,sum;
	cout<<"Enter a binary number  ";
	cin>>no;
	
	cout<<"Decimal number of "<<no<<" is "<<binary(no);
	getch();
	return 0;

		
	
	
}
