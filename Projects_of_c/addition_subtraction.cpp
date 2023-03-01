#include<iostream>
#include<conio.h>
using namespace std;

void add(int a, int b)
{
	cout<<"Sum of two numbers is "<<a+b;
}

void sub(int x,int y)
{
	cout<<"\nDifference of two numbers is "<<x-y;
	//return 0;
}

int main()
{
	int x,y;
	cout<<"Enter two numbers\n";
	cin>>x>>y;
	add(x,y);
	sub(x,y);
	getch();
}
