#include<iostream>
#include<conio.h>
using namespace std;

class Dummy
{
	private:
		int a,b;
		int *p;
	public:
		Dummy()  // constructor
		{
			p = new int;
		}
		void setData (int x, int y,int z)
		{
			a = x; b = y;
			*p = z;
			
		}
		void showData()
		{
			cout<<"\na = "<<a<<"\nb = "<<b;
		}
		
		Dummy(Dummy & d) //copy constructor
		{
			a = d.a;  b = d.b;
			p = new int;
			*p = *(d.p);
		}
		~Dummy()  // Distractor
		{
			delete p;
		}
};
int main()
{
	Dummy d1;
	d1.setData(3,4,5);
	Dummy d2(d1);
	d2.showData();
	getch();
	return 0;
}

