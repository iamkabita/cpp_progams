#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to identify number greater or less than 0,5 and 10. 
int main()
{
	int n;
	cout<<"Enter a number ";
	cin>>n;
	if(n>10)
	{
		cout<<"It is greater than 10";
	}
	else if(n>5)
	{
		cout<<"It is greater than 5";
	}
	else if(n==0)
	{
		cout<<"It is equal to zero";
	}
	else if(n>=-5)
	{
		cout<<"It is less than zero";
	}
	else if(n>=-10)
	{
		cout<<"It is less than minus 5";
	}
	else
	{
		cout<<"It is less than minus 10";
	}
	getch();
	return 0;
}
