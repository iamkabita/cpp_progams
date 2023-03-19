#include<iostream>
#include<conio.h>
using namespace std;

void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int x,y;
	cout<<"Enter two numbers"<<endl;
	cin>>x>>y;
	swap(&x,&y);
	cout<<"a = "<<x<<" b = "<<y;
	return 0;
}
