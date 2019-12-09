#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,k;
	char ch1;
	for(k=0;k<5;k++)
	{
		gotoxy(30,9);
		cout<<"D E N  D E N  M U S H I";
		gotoxy(34,12);
		cout<<"Switching on";
		for(i=0;i<3;i++)
		{
			for(j=0;j<5000;j++)
			{
				cout<<".\b";
				if(j==4999)
				{
					cout<<".";
				}
			}
		}
		clrscr();
	}
	clrscr();
	gotoxy(0,25);
	cout<<"1.Dial\t\t\t\t";
	cout<<"2.Menu\t\t\t\t    ";
	cout<<"3.Contacts";
	gotoxy(0,0);
	cout<<"Network ";
	for(i=0;i<6;i++)
	{
		for(j=0;j<2000;j++)
		{
			cout<<"1\b";
			if(j==1999)
			{
				cout<<"1";
			}
		}
	}
	gotoxy(65,0);
	cout<<"Battery 111111";
	gotoxy(12,11);
	cout<<"(ENTER THE FOLLOWING KEYS TO PERFORM THE FOLLOWING FUNCTION)";
   cin>>ch1;
	switch(ch1)
	{
		case 1:clrscr();
				 gotoxy(5,5);
				 cout<<"1";
				 gotoxy(25,5);
				 cout<<"2";
				 gotoxy(40,5);
				 cout<<"3";
				 gotoxy(5,8);
				 cout<<"4";
				 gotoxy(25,8);
				 cout<<"5";
				 gotoxy(40,8);
				 cout<<"6";
				 gotoxy(5,15);
				 cout<<"7";
				 gotoxy(25,15);
				 cout<<"8",
				 gotoxy(40,15);
				 cout<<"9";
				 gotoxy(40,20);
             cout<<"0";



		case 2:clrscr();

		case 3:clrscr();
	}
}
