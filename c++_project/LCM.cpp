#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to find Least Common Multiple (LCM).

int lcm(int d1, int d2)
{
	int j,sum;
	if(d2>d1)
	{
		for(j=1;j<=d2;j++)
		{
			sum = d1*j;
			if((sum % d2) ==0)
			{
				return (sum);
			}
		}
	}
	else
	{
		for(j=1;j<=d1;j++)
		{
			sum = d2*j;
			if((sum % d1 )==0)
			{
				return (sum);
			}
		}
	}
}
int main()
{
	int d1,d2;
	cout<<"Enter two numbers"<<endl;
	cin>>d1>>d2;
	cout<<"LCM of "<<d1<<" and "<<d2<<" is "<<lcm(d1,d2);
	getch();
	return 0;

}

