#include<iostream>
#include<conio.h>
using namespace std;

template <class X >
X Big(X a, X b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	cout<<Big(5,7)<<endl;
	cout<<Big(4.3 , 4.4);
	getch();
	return 0;
}
