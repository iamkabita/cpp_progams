#include<iostream>
#include<conio.h>
using namespace std;

class student
{
	int roll;
	char name[20];
	public :
		void getdata(void);
		void display(void)
		{
			cout<<"Your Name : "<<name<<endl;
			cout<<"Your roll no. : "<<roll<<endl;
		}
};
void student::getdata(void)
{
	cout<<"Enter your name ";
	cin>>name;
	cout<<"Enter your roll no. ";
	cin>>roll;
}
int main()
{
	student data;
	data.getdata();
	data.display();
	getch();
	return 0;
}
