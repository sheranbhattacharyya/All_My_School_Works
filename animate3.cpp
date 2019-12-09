//animation 3
#include<iostream.h>
#include<conio.h>
void animation3(char a[50]);
void main()
{
	char a[50]={"I m the best"};
	animation3(a);
}
void animation3(char a[50])
{
	int i,j,k=0;
	for(i=0;a[i]<'\0';i++)
	{
		gotoxy(k++,0);
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