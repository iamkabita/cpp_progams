#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	int a,b;
	public:
		void setData(int x,int y)
		{
			a = x; b = y;
		}
		void showData()
		{
			cout<<"a = "<<a<<"\nb = "<<b<<endl;
		}
		friend void fun(complex);
};
void fun(complex c)
{
	cout<<"Sum is "<<c.a+c.b<<endl;
}
int main()
{
	complex c1;
	fun(c1);       // friend function (before set c1 data)
	c1.setData(3,4);
	fun(c1);      // friend function (after set c1 data)
	getch();
	return 0;
}

