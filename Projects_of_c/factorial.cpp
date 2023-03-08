#include<iostream>
#include<conio.h>
using namespace std;
//Write a c++ program to print factorial of n number.
int main()
{
	int n,i,product=1;
	cout<<"Enter a number ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		product = product*i;
	}
	cout<<"Factorial of "<<n<<" is "<<product;
	getch();
	return 0;
}
