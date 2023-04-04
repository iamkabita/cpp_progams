#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=0,gm;
	initgraph(&gd,&gm,"");
	circle(300,200,70);
	getch();
	closegraph();
	return 0;
}
