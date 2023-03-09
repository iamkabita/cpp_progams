#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to identify a number is positive, negative or zero.
int main()
{
	int n;
	cout<<"Enter a number ";
	cin>>n;
	if(n>0)
	{
		cout<<"It is a Positive number";
	}
	else if(n<0)
	{
		cout<<"It is a Negative number";
	}
	else
	{
		cout<<"It is Zero";
	}
	getch();
	return 0;
}
