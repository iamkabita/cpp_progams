#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,r,k=1;
	cout<<"Enter number of row  ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		k =1;
		for(j=1;j<=2*r-1;j++)
		{
			if(j>=r+1-i&&j<=r-1+i)
			{
				cout<<k<<" ";
				if(j<r)
			      {
				    k++;
			      }
			    else
			      {
				     k--;
			      }		
			}
			else
			{
				cout<<"  ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}

