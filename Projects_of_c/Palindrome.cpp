#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int no,d,t=1,x,y,isPalindrome=1;
	cout<<"Enter a number\n";
	cin>>no;
	cout<<"Enter number of digit\n";
	cin>>d;
	while(d>1)
	{
		t = t*10;
		d--;
	}
	while(no>10)
	{
		x = no/t;
		y = no%10;
		if(x == y)
		{
			no = no%t;
			no = no/10;
			t = t/100; 
		}
		else
		{
			isPalindrome =0;
			break;
		}
	}
	if(isPalindrome)
	{
		cout<<"It is a Palindrome number";
	}
	else
	{
		cout<<"It is not a Palindrome number";
	}
	
	getch();	
}
