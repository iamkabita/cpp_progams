#include<iostream>
#include<conio.h>
using namespace std;

class Account
{
	int balance;      // instance member function
	static float ROI; // static member variable
	public:
		void setBalance(int b)
		{
			balance = b;
		}
		static void setRoi(float r) //static member function
		{
			ROI = r;
		}
};
float Account :: ROI=10;
int main()
{
	Account :: setRoi (float(10));
	getch();
	return 0;
}
