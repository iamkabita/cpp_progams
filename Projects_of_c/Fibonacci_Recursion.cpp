#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to print fibonacci of nth term. 
int fib(int term)
{
	if (term == 1||term == 2)
	{
		return (term -1);
	}
	return (fib(term-1)+ fib(term-2));	
}
int main()
{
	int n;
	cout<<"Enter a number upto 45 ";
	cin>>n;
	if (n==1||n==21||n==31||n==41)
	{
		cout<<n<<"st term of Fibonacci series is "<<fib(n);
	}
	else if(n==2||n==22||n==32||n==42)
	{
		cout<<n<<"nd term of Fibonacci series is "<<fib(n);
	}
	else if(n==3||n==23||n==33||n==43)
	{
		cout<<n<<"rd term of Fibonacci series is "<<fib(n);
	}
	else
	{
		cout<<n<<"th term of Fibonacci series is "<<fib(n);
	}	
	getch();
	return 0;
}
