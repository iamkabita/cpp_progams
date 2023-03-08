#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to print n even and odd number through recursion.
void Even(int n)
{
	if(n>0)
	{
		Even (n-1);
	    cout<<" "<<n*2; //cout<<"Even numbers are " <<n*2; This is wrong because if we write like this then print (Even numbers are) n times with even number. 
	}
}
void Odd(int n)
{
	if(n>0)
	{
		Odd(n-1);
	    cout<<" "<<n*2-1;
	}
}

int main()
{
	int n;
	cout<<"Enter a number ";
	cin>>n;
	cout<<"Even numbers are ";
	Even(n);
	cout<<"\nOdd numbers are ";
	Odd(n);
	getch();
	return 0;
}
