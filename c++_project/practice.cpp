#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class book
{
	int bookNo;
	string name;
	float price;
	public:
		
     	book(int no, string name_value , float p)
	    {
	    	bookNo = no;
	    	name = name_value;
	    	price = p;    	
		
	    }
	void showdata()
	{
		cout<<"Book no. "<<bookNo<<endl;
		cout<<"Name =  "<<name<<endl;
		cout<<"price=  "<<price<<endl;
		
	}
};
int main()
{
	book b1(100,"C++",250.67);
	b1.showdata();
	getch();
	return 0;
}
