#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int a;
	public:
		A(int k)
		{
			a = k;
		}
		int transferData()
		{
			return a;
		}
		
};
class B:public A
{
	int b;
	public:
		B(int x, int y):A(x)
		{
			b = y;	
		}
		void getdata()
		{
			cout<<"a = "<<transferData()<<endl;
			cout<<"b = "<<b;
		}
		
};
int main()
{
	B obj(2,3);
	obj.getdata();
	return 0;
	
}
