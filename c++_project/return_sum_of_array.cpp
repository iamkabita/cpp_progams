#include<iostream>
#include<conio.h>
using namespace std;
// Write a function to find sum of array elements
//find index of greatest value elements in an array
int sum(int A[], int size)
{
	int i,s;
	for(i=0,s=0;i<size;i++)
	{
		s = s+A[i];
	}
	return s;
}

int main()
{
	int a[]={10,20,30,40,50};
	cout<<"Sum is "<<sum(a,5);	
	return 0;	
}
