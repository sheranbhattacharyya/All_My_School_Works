//animation 5
#include<iostream.h>
#include<conio.h>
void animation5(char a[50]);
void main()
{
	char a[50]={"I m the best"};
	animation5(a);
}
void animation5(char a[50])
{
	int i,j,k=0;
	for(i=0;a[i]<'\0';i++,k++)
	{
		gotoxy(0,k);
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