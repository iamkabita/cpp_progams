#include<iostream>
#include<conio.h>
using namespace std;



int main()
{
	int i,j;
	char ch;
	for(i=1;i<=32;i++)
	{
		for(j=1;j<=39;j++)
		{
			if(i==1||i==13||i==7||i==19)
			{
				cout<<"  ";
			}
			else if(i==2||i==3||i==4||i==5||i==6)
			{
				if(j==2||j==6||j==17)
				  {
					cout<<"* ";
				  }
				 else if(i==2||i==4||i==6)
		      	    {
				        if(j==7||j==3||j==8)
				         {
					        cout<<"* ";
				         }
				     	else if(i==2)
				         {
					        if(j==10||j==11||j==12||j==13||j==15||j==16||j==18||j==19)
					        {
						        cout<<"* ";
					        }
					        else{
					        	cout<<"  ";
							}
						}
						else if(i==4)
				        {
					        if(j==11)
					         {
						        cout<<"* ";
					         }
					         else{
					         	cout<<"  ";
							 }
					    }
					   else if(i==6)
		     	        {
		     		        if(j==10||j==11||j==12||j==13)
		     		          {
		     			          cout<<"* ";
					         }
				         	else{
					        	cout<<"  ";
					        }
			        	}
				
					   else{
						    cout<<"  ";
					   }
				}
				else if(i==3)
				{
					if(j==2||j==4||j==10)
					   {
						   cout<<"* ";
					   }
					else{
						cout<<"  ";
					}
				}
			    else if(i==5)
				{
					if(j==2||j==4||j==12)
					   {
						   cout<<"* ";
					   }
					else{
						cout<<"  ";
					}
				}
				else{
					cout<<"  ";
				}
			}
			else if(i==8||i==9||i==10||i==11||i==12)
			{
				if(j==7||j==9||j==11)
				{
					cout<<"* ";
				}
				else if(i==8)
				{
					if(j==8||j==12||j==13)
					{
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				else if(i==10)
				{
					if(j==12||j==13)
					{
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				else if(i==12)
				{
					if(j==8)
					{
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				else{
					cout<<"  ";
				}
			}
			else if(i==14||i==15||i==16||i==17||i==18)
			{
				if(j==3||j==7||j==10||j==12||j==17)
				{
					cout<<"* ";
				}
				else if(i==14||i==18)
				{
					if(j==13||j==14||j==15||j==20)
					{
						cout<<"* ";
					}
					else if(i==18)
					{
						if(j==4||j==5||j==8||j==9)
						{
							cout<<"* ";
						}
						else{
							cout<<"  ";
						}
					}
					else{
						cout<<"  ";
					}
				}
				else if(i==15||i==17)
				{
					if(j==19)
					{
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				else if(i==16)
				{
					if(j==18)
					{
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				else{
					cout<<"  ";
				}
			}
			else if(i==20||i==21||i==22||i==23||i==24)
			{
				if(j==5||j==9||j==11||j==13)
				{
					cout<<"* ";
				}
				else if(i==21||i==22||i==24)
				{
					if(j==15)
					{
						cout<<"* ";
					}
					else if(i==22)
					{
						if(j==6||j==7||j==14)
						{
							cout<<"* ";
						}
						else{
							cout<<"  ";
						}
					}
					else if(i==24)
					{
						if(j==10)
						{
							cout<<"* ";
						}
						else{
							cout<<"  ";
						}
					}
					else{
						cout<<"  ";
					}
				}
				else if(i==20)
					{
						if(j==6||j==7||j==10||j==14||j==15)
						{
							cout<<"* ";
						}
						else{
							cout<<"  ";
						}
					}
				else if(i==23)
				{
					if(j==14)
					{
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				else{
					cout<<"  ";
				}
			}
			else if(i==26||i==27||i==28||i==29||i==30)
			{
				if(j==3||j==13||j==15||j==17||j==23)
				{
					cout<<"* ";
				}
				else if(i==26||i==30)
				{
					if(j==4||j==5||j==7||j==11)
					{
						cout<<"* ";
					}
					else if(i==26)
					{
						if(j==14||j==18||j==22)
						{
							cout<<"* ";
						}
						else{
							cout<<"  ";
						}
					}
					else{
						cout<<"  ";
					}
				}
				else if(i==27)
				{
					if(j==8||j==10||j==19||j==21)
					{
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				else if(i==28)
				{
					if(j==4||j==5||j==9||j==14||j==20)
					{
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				else if(i==29)
				{
					if(j==8||j==10)
					{
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				else{
					cout<<"  ";
				}
			}
			
		}
		cout<<endl;
	}
	
	ch =getch();
	system("cls");
	for(i=1;i<=13;i++)
	{
		for(j=1;j<=39;j++)
		{
			if(i==1||i==13||i==7)
			{
				cout<<"  ";
			}
			else if(i==2||i==3||i==4||i==5||i==6)
			{
				if(j==1||j==4||j==6||j==8||j==10||j==14)
				{
					cout<<"* ";
				}
				 else if(i==2||i==4)
		      	{
				    if(j==7||j==11||j==15)
				     {
					    cout<<"* ";
				     }
				     else if(i==2)
			          {
				         if(j==18||j==22)
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
			           	if(j==2||j==3||j==4||j==20)
			            	{
					            cout<<"* ";
				            }
				            else
				            {
					           cout<<"  ";
				            }
			           }
			          
			    }
			    else if(i==3)
			        {
				        if(j==12||j==16||j==19||j==21)
				            {
					           cout<<"* ";
				            }
				        else
				            {
				            	cout<<"  ";
							}
				            
			        }
			    
			    else if(i==5||i==6)
			        {
			           	if(j==20)
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
			else if(i==8||i==9||i==10||i==11||i==12)
			{
				if(j==7||j==11||j==13||j==15||j==18||j==20||j==24||j==29||j==31)
				{
					cout<<"* ";
				}
				else if(i==8||i==12)
			      {
				      if(j==5||j==6||j==12||j==22||j==32||j==33)
				       {
					      cout<<"* ";
				       }
				       else if(i==8)
			           {
				           if(j==8||j==9||j==21||j==35||j==39)
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
			            	if(j==16||j==17||j==22||j==28||j==37)
			            	{
					           cout<<"* ";
				            }
			            	else
			             	{
				            	cout<<"  ";
				            }
		             	}
				  }		
			    else if(i==9)
			     {
				     if(j==22||j==25||j==36||j==38)
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
			    	if(j==21||j==22||j==26||j==32||j==33||j==37)
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
				     if(j==5||j==21||j==27||j==37)
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
		}
		cout<<endl;
	}
	
	
	return 0;
}
