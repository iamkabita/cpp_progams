#include<iostream>
#include<conio.h>
using namespace std;

class number
{
	int a;
	public :
		int task (void);
		void display(void);
};

int number :: task(void)
{
	cout<<"Enter any number ";
	cin>>a;
	if(a % 5 ==0)
	{
		return 0;
	}
	return (a % 5);
}
void number :: display(void)
{
	cout<<"Reminder = "<<task()<<endl;
}
int main()
{
	number result;
	result.display();
	getch();
	return 0;
}

