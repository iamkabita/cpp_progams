#include<iostream>
#include<conio.h>
using namespace std;
//ATM (Function)
int withdraw(int balance,int password)
{
	int amount=0,pin;
	cout<<"Enter amount  ";
	    		cin>>amount;
	    		cout<<"Enter your pin  ";
	    		cin>>pin;
	    		if (pin == password)
	    		{
	    			cout<<"Transaction Successful\n";
	    			balance = balance - amount;
	    			cout<<"Your current balance is "<<balance;
	    			return (balance);
				}
				else
				{
					cout<<"Please enter correct pin";
				}
}

int checkBalance(int balance,int password, int amount)
{
	int pin;
		cout<<"Enter your pin  ";
				cin>>pin;
				if(pin == password)
				{
					balance = balance - amount;
					cout<<"Your current Balance is "<<balance;
					return (balance);
				}
				else
				{
					cout<<"Please enter correct pin";
				}
}

int changePin(int balance,int password)
{
	int pin,newpin,conformpin;
	cout<<"Enter your pin  ";
				cin>>pin;
				if(pin == password)
				{
					cout<<"Enter Your new pin  ";
			    	cin>>newpin;
				    cout<<"Conform your new pin  ";
				    cin>>conformpin;
				    if(newpin == conformpin)
				    {
				    	cout<<"Your New pin is "<<newpin;
				    	return (newpin);
				    
					}
					else
					{
						cout<<"Enter Your correct New pin";
					}
			
				}
				else
				{
					cout<<"Please enter correct pin";
				}
	
}
                
int main()
{
	int choice,end=1,balance=50000,password=123,amount = 0;
	while(end)
	{
		cout<<"\n1. Withdraw amount\n";
	    cout<<"2. Check your balance\n";
	    cout<<"3. Change your pin\n";
	    cout<<"4. Exit\n\n";
	    cout<<"Enter your choice  ";
	    cin>>choice;
	    switch (choice)
	    {
	    	case 1:
	    		balance = withdraw(balance,password);
				break;
			case 2:
			    balance = checkBalance(balance,password,amount);
				break;
			case 3:
				password = changePin(balance,password);
				break;
			case 4:
				end = 0;
				break;
			default :
				cout<<"Enter correct choice";	
				
		}
	    
	}
	getch();
	return 0;	
}
