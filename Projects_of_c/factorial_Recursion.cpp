#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to print factorial of n through recursion.
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	return (n*fact(n-1));
}
int main()
{
	int n;
	cout<<"Enter a number ";
	cin>>n;
	cout<<"Factorial of "<<n<<" is "<<fact(n);
	getch();
	return 0;
}
