#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to print number of days in a week.
int main()
{
	char week[8][10]={"0","Monday","Tuesday","wednesday","Thursday","Friday","Saturday","Sunday"};
	int n;
	cout<<"Enter number of week "<<endl;
	cin>>n;
	cout<<n<<" is week number of "<<week[n];
	return 0;
}
