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
			if(i==1||i==21||j==1||j==29)
			{
				cout<<"* ";
			}
			else if(i==3||i==4||i==5||j==6||j==7)
			{
				if(j==3||j==6||j==8||j==10||j==12||j==16)
				{
					cout<<"* ";
				}
				else if(i==3||i==5)
				{
					if(j==9||j==13||j==17||j==18)
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
					if(j==21||j==23||j==14||j==18)
					{
						cout<<"* ";
					}
					else
					{
						cout<<"  ";
					}
				}
				else if(i==3)
				{
					if(j==20||j==24)
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
					if(j==4||j==5||j==22)
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
					if(j==22)
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
			else if(i==9||i==10||i==11||i==12||i==13)
			{
				if(j==6||j==10||j==12||j==16||j==20)
				{
					cout<<"* ";
				}
				else if(i==9||i==11||i==13)
				{
					if(j==13||j==14)
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
					if(j==7)
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
					if(j==8||j==18)
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
					if(j==9||j==17||j==19)
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
			else if(i==15||i==16||i==17||i==18||i==19)
			{
				if(j==17||j==21||j==23||j==25||j==27)
				{
					cout<<"* ";
				}
				else if(i !=16||i !=18)
				{
					if(j==18||j==19)
					{
						cout<<"* ";
					}
					else
					{
						cout<<"  ";
					}
				}
				else if(i==15||i==17)
				{
					if(j==22||j==26)
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
					if(j==11||j==15)
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
					if(j==12||j==14)
					{
						cout<<"* ";
					}
					else
					{
						cout<<"  ";
					}
				}
				else if(i==17||i==18||i==19)
				{
					if(j==13)
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
					if(j==26)
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
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
