#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void thankyou();
void main()
{
	thankyou();
}
void thankyou()
{ 
	int i,j;
	for(i=25;i>0;i--)
	{

		for(j=0;j<75;j++)
		{
			gotoxy(25,i);
			cout<<"T   H   A   N   K   Y   O   U";
			gotoxy(35,i+2);
			cout<<"CREDITS";
			gotoxy(35,i+4);
			cout<<"SIDDARTH";
			gotoxy(35,i+5);
			cout<<"DAMODAR";
			gotoxy(35,i+6);
			cout<<"HARSHIT";
			gotoxy(35,i+7);
			cout<<"SHERAN";
			clrscr();
		}
	}

}