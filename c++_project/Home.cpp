#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
	int i,j;
	int x=40,y=12,end=1;
	char ch;
	for(i=1;i<=11;i++)
	{
		for(j=1;j<=20;j++)
		{
			if(i==5||i==11)
			{
				cout<<"* ";
			}
			else if(i<=3)
			{
				if(i==1)
				{
					if(j==5)
					{
						cout<<"* ";
					}
					else
					{
						cout<<"  ";
					}					
				}
				else if(i==2)
				{
					if(j>=6&&j<=20)
					{
						cout<<"* ";
					}
					else if(j==4)
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
					if((j==3||j==7||j==20))
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
			else if(i==4)
			{
				if(j==2||j==8||j==20)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==6)
			{
				if(j==2||j==8||j==20)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==7)
			{
				if(j==2||j==8||j>=10&&j<=12||j==20)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}				
			}
			else if(i==8)
			{
				if(j==2||j==4||j==5||j==6||j==8||j==10||j==12||j==20)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			else if(i==9)
			{
				if(j==2||j==4||j==6||j==8||j>=10&&j<=12||j==20)
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
				        if(j==2||j==4||j==6||j==8||j==20)
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
	gotoxy(x,y);
	cout<<"[j(jj)(jj)(jj)(jj]";
	//gotoxy(a,b);
	//cout<<"L L";
	
	while(end)
	{
		ch= getch();
		
		switch(ch)
		{
			case 'a':
				x--;
				break;
			case 's':
				x++;
				break;
			case 'w':
				y--;
				break;
			case 'z':
				y++;
				break;
			case 27:
				end=0;
		}
		system("cls");
		for(i=1;i<=11;i++)
	      {
		      for(j=1;j<=20;j++)
		         {
			         if(i==5||i==11)
			          {
				         cout<<"* ";
			          }
			          
			        else if(i<=3)
			          {
				         if(i==1)
				           {
					          if(j==5)
					            {
						           cout<<"* ";
					            }
					          else
					           {
						          cout<<"  ";
					           }					
				           }
			         	else if(i==2)
				        {
					        if(j>=6&&j<=20)
					          {
						         cout<<"* ";
					          }
					        else if(j==4)
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
					          if(j==3||j==7||j==20)
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
			       else if(i==4)
			        {
				       if(j==2||j==8||j==20)
				         {
					         cout<<"* ";
				         }
			        	else
			        	{
				        	cout<<"  ";
			        	}
		        	}
			     else if(i==6)
		        	{
			        	if(j==2||j==8||j==20)
			            	{
					            cout<<"* ";
				            }
			        	else
			        	 {
				        	cout<<"  ";
				         }
		        	}
			       else if(i==7)
		          	{
			        	if(j==2||j==8||j>=10&&j<=12||j==20)
				         {
					        cout<<"* ";
				         }
				         else
				        {
					        cout<<"  ";
				        }				
			        }
			     else if(i==8)
			       {
				       if(j==2||j==4||j==5||j==6||j==8||j==10||j==12||j==20)
				          {
					         cout<<"* ";
				          }
				        else
				         {
					        cout<<"  ";
			        	 }
		         	}
			       else if(i==9)
			       {
				      if(j==2||j==4||j==6||j==8||j>=10&&j<=12||j==20)
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
				       if(j==2||j==4||j==6||j==8||j==20)
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
	    cout<<endl;
	    cout<<"|_O_|"<<endl;
	    cout<<" l l"<<endl;
	     gotoxy(x,y);
	    cout<<"[j(jj)(jj)(jj)(jj]";
    }
	    
	return 0;
}
