#include<iostream.h>
#include<conio.h>
void sidedesign();
void main()
{
	sidedesign();
}
void sidedesign()
{
	int i,j;
	for(i=0;i<100;i++)
	{
   	cout<<"|";
		for(j=0;j<2;j++)
		{
			cout<<"# ";
		}
		cout<<"|";
		cout<<'\n';
	}
	for(i=0;i<100;i++)
	{
		gotoxy(75,0);
      cout<<"|";
		for(j=0;j<2;j++)
		{
			cout<<"# ";
		}
      cout<<"|";
		cout<<'\n';
	}
}

