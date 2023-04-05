#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=21;i++)
	{
		for(j=1;j<=29;j++)
		{
			if(i==1||i==21)
			{
				cout<<"*U";
			}
			else if(j==1)
			{
				cout<<"<*";
			}
			else if(j==29)
			{
				cout<<"*>";
			}
			else if(i==3)
			{
				if(j==3||j==6||j==8||j==9||j==10||j==12||j==13||j==14||j==16||j==17||j==18||j==20||j==24)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==4)
			{
				if(j==3||j==6||j==8||j==10||j==12||j==14||j==16||j==18||j==21||j==23)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==5)
			{
				if(j==3||j==4||j==5||j==6||j==8||j==9||j==10||j==12||j==13||j==14||j==16||j==17||j==18||j==22)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==6||i==7)
			{
				if(j==3||j==6||j==8||j==10||j==12||j==16||j==22)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==9||i==13)
			{
				if(j==6||j==10||j==12||j==13||j==14||j==16||j==20)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==10)
			{
				if(j==6||j==7||j==10||j==12||j==16||j==20)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==11)
			{
				if(j==6||j==10||j==12||j==13||j==14||j==16||j==20||j==8||j==18)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==12)
			{
				if(j==6||j==10||j==12||j==9||j==17||j==16||j==19||j==20)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==15)
			{
				if(j==11||j==15||j==17||j==18||j==19||j==21||j==22||j==23||j==25||j==26||j==27)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==16)
			{
				if(j==12||j==14||j==17||j==21||j==23||j==25||j==27)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==17)
			{
				if(j==13||j==17||j==18||j==19||j==21||j==22||j==23||j==25||j==26||j==27)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==18)
			{
				if(j==13||j==17||j==21||j==23||j==25||j==26)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==19)
			{
				if(j==13||j==17||j==18||j==19||j==21||j==23||j==25||j==27)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else
			{
				cout<<"  ";
			}
		 
		}
		cout<<endl;
	}
	return 0;
}
