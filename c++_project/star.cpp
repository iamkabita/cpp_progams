#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,r,k;
	//cout<<"Enter number of row  ";
	//cin>>r;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			k=1;
			if(j>=5-i&&j<=3+i)
			{
				cout<<k<<" ";
			}
			else
			{
				cout<<"  ";
			}
			if(j>4)
			{
				k--;
			}
			else
			{
				k++;
			}		
		}
		cout<<endl;
	}
	return 0;
}

