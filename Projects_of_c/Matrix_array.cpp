#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to print sum of two Matrix through Array. 
int main()
{
	int it,j,A[3][3],B[3][3],sum[3][3];
	cout<<"Enter 9 numbers for 1st matrix\n";
	for(it=0;it<3;it++)
	{
		for(j=0;j<3;j++)
		{
			cin>>A[it][j];
		}
	}
	cout<<"Enter 9 numbers for 2nd matrix\n";
	for(it=0;it<3;it++)
	{
		for(j=0;j<3;j++)
		{
			cin>>B[it][j];
		}
	}
	cout<<"Sum of two matrix is\n";
	for(it=0;it<3;it++)
	{
		for(j=0;j<3;j++)
		{
			sum[it][j] = A[it][j] + B[it][j];
			cout<<sum[it][j]<<"  ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
