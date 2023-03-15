#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to calculate power of a number (Recursion).

int power(int n, int p)
{
	if(p==0)
	{
		return 1;
	}
	return (n*power(n,(p-1)));
}
int main()
{
	int n,p;
	cout<<"Enter a number and power of number"<<endl;
	cin>>n>>p;
	cout<<p<<" Power of "<<n<<" is "<<power(n,p);
	return 0;
}
