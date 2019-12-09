#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<time.h>
void topdesign();
void main()
{
	topdesign();
}
void topdesign()                                                
{
	int i;
	time_t t1=time(NULL);
	tm*t2=localtime(&t1);
	for(i=0;i<79;i++)
	{
		cout<<"=";
	}
	cout<<'\n';
	for(i=0;i<80;i++)
	{
		cout<<"# ";
	}
	for(i=0;i<79;i++)
	{
		cout<<"=";
	}
	cout<<"\n\n\n";
	cout<<"\n\n\n";
	for(i=0;i<79;i++)
	{
		cout<<"=";
	}
	cout<<'\n';
	for(i=0;i<80;i++)
	{
		cout<<"# ";
	}
	for(i=0;i<79;i++)
	{
		cout<<"=";
	}
	gotoxy(12,7);
	for(i=0;i<2000;i++)
	{
		cout<<"D\b";
		if(i==1999)
		{
			cout<<"D ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"E\b";
		if(i==1999)
		{
			cout<<"E ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"N\b";
		if(i==1999)
		{
			cout<<"N    ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"D\b";
		if(i==1999)
		{
			cout<<"D ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"E\b";
		if(i==1999)
		{
			cout<<"E ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"N\b";
		if(i==1999)
		{
			cout<<"N    ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"M\b";
		if(i==1999)
		{
			cout<<"M ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"U\b";
		if(i==1999)
		{
			cout<<"U ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"S\b";
		if(i==1999)
		{
			cout<<"S ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"H\b";
		if(i==1999)
		{
			cout<<"H ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"I\b";
		if(i==1999)
		{
			cout<<"I    ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"V\b";
		if(i==1999)
		{
			cout<<"V ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"E\b";
		if(i==1999)
		{
			cout<<"E ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"R\b";
		if(i==1999)
		{
			cout<<"R ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"S\b";
		if(i==1999)
		{
			cout<<"S ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"I\b";
		if(i==1999)
		{
			cout<<"I ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"O\b";
		if(i==1999)
		{
			cout<<"O ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"N\b";
		if(i==1999)
		{
			cout<<"N    ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"2\b";
		if(i==1999)
		{
			cout<<"2 ";
		}
	}for(i=0;i<2000;i++)
	{
		cout<<".\b";
		if(i==1999)
		{
			cout<<". ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"0\b";
		if(i==1999)
		{
			cout<<"0 ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<".\b";
		if(i==1999)
		{
			cout<<". ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"1\b";
		if(i==1999)
		{
			cout<<"1 ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<".\b";
		if(i==1999)
		{
			cout<<". ";
		}
	}
	for(i=0;i<2000;i++)
	{
		cout<<"5\b";
		if(i==1999)
		{
			cout<<"5 ";
		}
	}
   gotoxy(70,14);
	cout<<t2->tm_mday<<"/"<<(1+t2->tm_mon)<<"/"<<(1900+t2->tm_year);
}

