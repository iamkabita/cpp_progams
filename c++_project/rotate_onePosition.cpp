#include<iostream>
#include<conio.h>
using namespace std;
// Write a function to rotate an array element by one position towards right.
void rotateRight(int A[],int size)
{
	int i,temp;
	temp = A[size-1];
	for(i=size-2;i>=0;i--)
	{
		A[i+1] = A[i];
	}
	A[0]=temp;
}
int main()
{
	int i,a[]={45,89,41,90,78,12,93,33,57,29,56};
	for(i=0;i<=9;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	rotateRight(a,10);
	for(i=0;i<=9;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
