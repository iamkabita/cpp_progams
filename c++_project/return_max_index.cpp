#include<iostream>
#include<conio.h>
using namespace std;
// Write a function to find index of greatest value elements in an array

int max_index(int A[],int size)
{
	int max,max_index;
	max = A[0];
	max_index = 0;
	for(int i=1;i<size;i++)
	{
		if(max<A[i])
		{
			max = A[i];
			max_index = i;
		}
	}
	return max_index;
	
}
int main()
{
	int a[]={10,45,34,89,78,95,100,20,58,69};
	cout<<"Index is "<<max_index(a,10);
	return 0;
}
