#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to find Highest Common Factor (HCF).
int hcf(int a,int b)
{
	int x;
	if(a>b)
	{
		x = a % b;
		if(( b % x)==0)
		{
			return x;
		}
	}
	else
	{
		x = b % a;
		if((a % x)==0)
		{
			return x;
		}
	}
}
int main()
{
	int d1,d2;
	cout<<"Enter two numbers"<<endl;
	cin>>d1>>d2;
	cout<<"HCF of "<<d1<<" and "<<d2<<" is "<<hcf(d1,d2);
	return 0;
}
