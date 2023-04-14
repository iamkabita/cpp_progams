#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,k=0,r;
	cout<<"Enter odd number of row ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		if(i<=r/2+1)
		{
			k++;
		}
		else
		{
			k--;
		}
		for(j=1;j<=r;j++)
		{
			if(j<=(r/2)+2-k||j>=(r/2)+k)
			{
				cout<<"* ";
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
