//animation 4
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void animation4(char a[50]);
void main()
{
	char a[50]={"I m the best"};
	animation4(a);
}
void animation4(char a[50])
{
	int i,j,k=100;
	for(i=0;a[i]<'\0';i++)
	{
		gotoxy(0,k--);
		{
			for(j=0;j<1000;j++)
			{
				cout<<a[i]<<'\b';
				if(j==999)
				{
					cout<<a[i];
				}
			}
		}
	}
}