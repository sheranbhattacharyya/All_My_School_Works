#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void sidedesign();
void main()
{
	sidedesign();
}
void sidedesign()
{
	int i;
	{
		gotoxy(57,16);
		for(i=0;i<16;i++)
		{
			cout<<"*";
		}
		cout<<'\n';
		gotoxy(57,17);
		{
			cout<<"CONTACT US AT:";
		}
		gotoxy(57,18);
		{
			cout<<"9696969696";
		}
		gotoxy(57,19);
		{
			cout<<"6969696969";
		}
		gotoxy(57,20);
		{
			cout<<"EMAIL US AT:";
		}
		gotoxy(57,21);
		{
			cout<<"dendenmushi@onepiece.com";
		}
		gotoxy(57,22);
		for(i=0;i<16;i++)
		{
			cout<<"*";
		}
	}
}
