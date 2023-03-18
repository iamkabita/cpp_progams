#include<iostream>
#include<conio.h>
using namespace std;
// Write a c++ program to print date and time struct or class.

class Date
{
	private:
		int day,mon,yr;
	public:
		void setdate(int d,int m,int y)
		{
			if(d<=31){
				day = d;
			}
			else
			{
				day = 30;
			}
			if(m<=12)
			{
				mon = m;
			}
			else
			{
				mon = 12;
			}
			yr = y;
		}
		void getdate()
		{
			cout<<"Date : "<<day<<"/ "<<mon<<"/ "<<yr<<endl;
		}	
};
class Time
{
	private:
		int hr,min,sec;
	public :
		void setTime(int h, int mi)
		{
			if(h<=24)
			{
				hr = h;
			while(mi>=60)
			{
				mi = mi - 60;
				h++;
				hr = h;
		    }
			if((mi/10) == 0)
			    {
				    sec = 0;
				    min = mi;
		       	}
			else
			   {
				  min = mi;
			   }			
			}
			else
			{
			    hr = 24;
			}
			
		}
		void getTime ()
		{
			if (sec==0)
			{
				cout<<"Time : "<<hr<<" : "<<sec<<min<<endl;
			}
			else
			{
				cout<<"Time : "<<hr<<" : "<<min<<endl;
			}
			
		}
};
int main()
{
	Date d1;
	Time t1;
	int d,m,y,h;
	int mi;
	cout<<"Enter present Date and Time"<<endl;
	cout<<"Date : ";
	cin>>d>>m>>y;
	cout<<"Time : ";
	cin>>h>>mi;
	d1.setdate(d,m,y);
	d1.getdate();
	t1.setTime(h,mi);
	t1.getTime();	
	return 0;
	
 } 
