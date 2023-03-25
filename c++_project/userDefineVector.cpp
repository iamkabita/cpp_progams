#include<iostream>
#include<conio.h>
using namespace std;

class Vector
{	
	public:
		int *arr =Null;
	    int length = 0;
	
		Vector()
		{
			arr = new int();
		}
		void push_back(int value)
		{
			int temp_arr = new int[length + 1];
			for(int i = 0;i<length;i++)
			{
				temp_arr[i]=arr[i];
			}
			temp_arr[length]=value;
			arr=temp_arr;
			length+=1;
		}
		void show_arr()
		{
			for(int i=0;i<=length;i++)
			{
				cout<<temp_arr[i];
			}
			cout<<endl;
		}
	};
	int main()
	{
		Vector array;
		array.push_back(10);
		array.push_back(25);
		array.push_back(40);
		array.push_back(50);
		array.show_arr();
		getch();
		return 0;
		
	}
