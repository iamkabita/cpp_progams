#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,s;
	cout<<"Enter number of row ";
	cin>>s;
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=2*s-1;j++)
		{
			if(j>=s+1-i&&j<=s-1+i)
		     {
		     	cout<<"* ";
		     }
		     else
		     {
		     	cout<<"  ";
			 }
		}
		cout<<"\n";
		
	}
	getch();
	return 0;
}
