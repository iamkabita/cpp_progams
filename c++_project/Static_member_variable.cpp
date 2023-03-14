#include<iostream>
#include<conio.h>
using namespace std;

class Account
{
	int balance;          //instance member variable
	static float ROI;     //static member variable   static variables are by default initialized to zero.
	public:
		void setBalance(int b)
		{
			balance = b;
		}
		void setRoi(float r)
		{
			ROI = r;
		}
		void showData()
		{
			cout<<"Amount = "<<balance*ROI/100<<endl;
		}
		int Amount(int b , float r)
		{
			balance = b;
			ROI = r;
			return (balance*ROI/100);
		}
		
};
float Account :: ROI;
int main()
{
	Account a1,a2;
	a1.setBalance(50000);
	a1.setRoi(10);
	a1.showData();
	cout<<"Amount = "<<a1.Amount(2000,10);
	getch();
	return 0;
}
