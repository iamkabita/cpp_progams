#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ programe to print how many days in a month.

int leap(int y)
{
	if(y % 100 ==0)
	{
		if(y % 400==0)
		{
			return 1;
		}
		return 0;
   }
	else if(y % 4 ==0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int n,y;
	cout<<"Enter number of a month\v \v";
	cout<<" Month : ";
	cin>>n;
	switch(n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"It has 31 days";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"It has 30 days";
			break;
		case 2:
			cout<<"Year : ";
	        cin>>y;
			if(leap(y))
			{
				cout<<"It has 29 days";
			}
			else
			{
				cout<<"It has 28 days";				
			}
			break;
		default :
			cout<<"Invalid number ";
	}
	return 0;
}
