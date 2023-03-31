#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			if(j==i)
			{
				cout<<"1";
			}
			else
			{
				if(k==0)
			     {
				     k++;
			     }
			    else
			     {
				    k--;
			     }
			   cout<<k;
			}
			
		}
		cout<<endl;
	}
	return 0;
}
