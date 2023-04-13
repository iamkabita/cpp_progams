#include<iostream>
#include<conio.h>
using namespace std;
// Write a function to arrange the numbers of array in acsending order.
// sorting is the predefine function.It is used arrange the numbers acsending order.
//I made sorting finction(increase) user define.
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
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int arr[n];
	cout<<"Enter numbers ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	increase(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
