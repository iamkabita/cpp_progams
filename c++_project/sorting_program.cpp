#include<iostream>
#include<conio.h>
using namespace std;
// Write a function to arrange the numbers of array in acsending order.
void increase(int A[],int size)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
		temp=A[i];
		for(j=i-1;j>=0;j--)
		{
			if(A[j] > temp)
			{
				A[j+1]=A[j];
			}
			else
			{
				break;
			}
		}
		A[j+1]=temp;
	}
	
}
int main()
{
	int i,arr[]={12,38,34,90,74,7,100,48,23,56,34};
	for(i=0;i<11;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	increase(arr,11);
	for(i=0;i<11;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
