#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void welcome();
void main()
{
	welcome();
}
void welcome()
{
	int i,j;
	for(i=0;i<12;i++)
	{

		for(j=0;j<50;j++)
		{
			gotoxy(30,i);
			cout<<"W   E   L   C   O   M   E";
			clrscr();
		}
	}
	for(j=0;j<1000;j++)
	{
		gotoxy(30,i);
		cout<<"W   E   L   C   O   M   E";
		clrscr();
	}
	for(i=13;i<25;i++)
	{

		for(j=0;j<50;j++)
		{
			gotoxy(30,i);
			cout<<"W   E   L   C   O   M   E";
			clrscr();
		}
	}
}
