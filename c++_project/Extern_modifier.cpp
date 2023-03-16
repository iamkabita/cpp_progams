#include<iostream>
#include<conio.h>
using namespace std;
// Using Extern when two or more files sharing the same global variable or function.
// 1st file
int count;
extern void write_extern();

int main()
{
	count = 5;
	write_extern();
	return 0;
}
