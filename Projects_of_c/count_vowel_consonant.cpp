#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int vow=0,con=0,spac=0,punc=0,l,i;
	string sta;
	cout<<"Enter a Statement\n";
	getline(cin, sta);
	cout<<"statement is "<<sta<<endl;
	l = sta.length();
	for(i=0;i<=l;i++)
	{
		if(isalpha(sta[i]))
		{
			if(sta[i]=='a'||sta[i]=='e'||sta[i]=='i'||sta[i]=='o'||sta[i]=='u')
			{
				vow++;
			}
			else
			{
				con++;
			}
		}
		if(ispunct(sta[i]))
		{
			punc++;
		}
		if(isspace(sta[i]))
		{
			spac++;
		}
	}
	cout<<"No. of Words are "<<spac+1;
	cout<<"\nNo. of Vowels are "<<vow;
	cout<<"\nNo. of Consonants are "<<con;
	cout<<"\nNo. of Space are "<<spac;
	cout<<"\nNo.of Special charater are "<<punc;
	getch();
}
