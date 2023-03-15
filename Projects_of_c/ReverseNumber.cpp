#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to print reverse number.
int main()
{
	int number,n,i,m=1,d=0,sum=0,x;
	cout<<"Enter a number  ";
	cin>>number;
	n = number;
	while(n>0)
	{
		n = n/10;
		d++;
	}
	n = number;
	for(i=1;i<d;i++)
	{
		m = m*10;
	}
	for(i=1;i<=d;i++)
	{
		x = n % 10;
		sum = x * m + sum;
		n= n/10;
		m = m/10;
	}
	cout<<"Reverse number is "<<sum;
	return 0;
	
}
