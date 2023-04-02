#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter number of rows";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j<i)
			{
				cout<<"  ";
			}
			else
			{
				cout<<"***********";
			}
		}
		cout<<endl;
		cout<<endl;
	}
	return 0;
}
