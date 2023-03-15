#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to calculate power of a number.
int main()
{
	int n,p,i,sum=1;
	cout<<"Enter a number and power of number"<<endl;
	cin>>n>>p;
	for(i=1;i<=p;i++)
	{
		sum = n *sum;
	}
	cout<<p<<" Power of "<<n<<" is "<<sum;
	return 0;
}
