#include<iostream>
#include<conio.h>
using namespace std;

int add(int a,int b)
{
	return (a+b);	
}
int sub(int a,int b)
{
	if(a>b)
		return (a-b);
	return (b-a);		
}
int multiply(int a,int b)
{
	return (a*b);
}
float division ()
{
	float a,b;
	cout<<"Enter Dividend and Divisior\n";
	cin>>a>>b;
	return (a/b);
}

int main()
{
	int choice,a,b,end=1;
	while(end)
	{
		cout<<"\n\n1. Addition\n";
		cout<<"2. Subtraction\n";
		cout<<"3. Multiplication\n";
		cout<<"4. Division\n";
		cout<<"5. Exit\n\n";
		cout<<"Enter your choice  ";
		cin>>choice;
	    switch(choice)
	    {
	    	case 1:
	    		cout<<"Enter two numbers\n";
	            cin>>a>>b;
	    		cout<<"Sum of two numbers is "<<add(a,b);
	    		break;
	    	case 2:
	    		cout<<"Enter two numbers\n";
	            cin>>a>>b;
	    		cout<<"Differnce of two nubers is "<<sub(a,b);
	    		break;
	    	case 3:
	    		cout<<"Enter two numbers\n";
	            cin>>a>>b;
	    		cout<<"Multiply of two numbers is "<<multiply(a,b);
	    		break;
	    	case 4:
	    		cout<<"Quotient is "<<division();
	    		break;
	    	case 5:
	    		end =0;
	    		break;
	    	default:
	    		cout<<"Enter correct choice";
		}
	}
	getch();
	return 0;	
}
