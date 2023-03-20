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
		int transferB()
		{
			return b;
		}
		void getdata()
		{
			cout<<"a = "<<transferData()<<endl;
			cout<<"b = "<<b<<endl;
		}
		
};
int main()
{
	B obj(2,3);
	obj.getdata();
	cout<<"Sum of a and b is "<<obj.transferData()+obj.transferB();	
	return 0;
	
}
