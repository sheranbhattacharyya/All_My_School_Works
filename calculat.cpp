#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
void calculate();
void calculate(double a, char oper, double b);
void calculate(double a, char oper);
void calculatemorethan2operandsdifftype(int n);
void calculatemorethan2operandssametype(int n);
void main()
{
	calculate();
}
void calculate()
{
	{
	  double a,b;
	  int n;
	  char oper;
	  Calculate:
	  clrscr();
	  gotoxy(10,9);
	  cout<<"1";
	  gotoxy(25,9);
	  cout<<"2";
	  gotoxy(40,9);
	  cout<<"3";
	  gotoxy(55,9);
	  cout<<"+";
	  gotoxy(70,9);
	  cout<<"C.ln";
	  gotoxy(10,12);
	  cout<<"4";
	  gotoxy(25,12);
	  cout<<"5";
	  gotoxy(40,12);
	  cout<<"6";
	  gotoxy(55,12);
	  cout<<"-";
	  gotoxy(70,12);
	  cout<<"D.x!";
	  gotoxy(10,15);
	  cout<<"7";
	  gotoxy(25,15);
	  cout<<"8",
	  gotoxy(40,15);
	  cout<<"9";
	  gotoxy(55,15);
	  cout<<"A.sqr";
	  gotoxy(70,15);
	  cout<<"E.log10";
	  gotoxy(10,18);
	  cout<<"*";
	  gotoxy(25,18);
	  cout<<"0";
	  gotoxy(40,18);
	  cout<<"/";
	  gotoxy(55,18);
	  cout<<"B.sqrt";
	  gotoxy(70,18);
	  cout<<"F.log2";
	  gotoxy(40,21);
	  cout<<"G.cube";
	  gotoxy(0,0);
	  cout<<"Enter no. of operands:\t";
	  cin>>n;
	  if(n==2)
	  {
			cout<<"Enter the first number:\t";
			cin>>a;
			cout<<"Enter the operator:\t";
			cin>>oper;
			cout<<"Enter the second number:";
			cin>>b;
			calculate(a,oper,b);
	  }
	  else if(n==1)
	  {
			cout<<"Enter the number:\t";
			cin>>a;
			cout<<"Enter the operand:\t";
			cin>>oper;
			calculate(a,oper);
			getche();

	  }
	  else
	  {
			cout<<"Do you want to have the same operator throughout the calculation or different \noperators?? (S/D)\t";
			S_or_D:
			char opertype;
			cin>>opertype;
			if(opertype=='S'||opertype=='s')
			{
				calculatemorethan2operandssametype(n);
			}
			else if(opertype=='D'||opertype=='d')
			{
				calculatemorethan2operandsdifftype(n);
			}
			else
			{
				cout<<"INVALID KEY! PLEASE ENTER A VALID KEY!";
				goto S_or_D;
			}
	  }
	  cout<<"\nDo you want to continue?(y/n)\t";
	  char x;
	  cin>>x;
	  if(x=='y'||x=='Y')
	  {
			goto Calculate;
	  }
	  else if(x=='n'||x=='N')
	  {
			;
	  }
	  else
	  {
			cout<<"INVALID KEY! PLEASE ENTER A VALID KEY!";
	  }
	}
}
void calculate(double a,char oper,double b)
{
	double res;
	switch(oper)
			{
				case '+'://+
						 {
							res=(a+b);
							cout<<"Result=\t"<<res;
							break;
						 }
				case '-'://-
						 {
							res=(a-b);
							cout<<"Result=\t"<<res;
							break;
						 }
				case '*'://*
						 {
							res=(a*b);
							cout<<"Result=\t"<<res;
							break;
						 }
				case '/':// /
						 {
							res=(a/b);
							cout<<"Result=\t"<<res;
							break;
						 }
				case '%'://%
						 {
							int x,y;
							x=a;
							y=b;
							res=(x%y);
							cout<<"Result=\t"<<res;
							break;
						 }
				}
}
void calculate(double a,char oper)
{
	long double res;
	switch(oper)
			{
				case 'B'://sqrt
							{
							  res=sqrt(a);
							  cout<<"Result=\t"<<res;
							  break;
							}
				case 'A'://square
							{
							  res=(a*a);
							  cout<<"Result=\t"<<res;
							  break;
							}
				case 'G'://cube
							{
							  res=(a*a*a);
							  cout<<"Result=\t"<<res;
							  break;
							}
				case 'C'://ln
							{
							  res=log(a);
							  cout<<"Result=\t"<<res;
							  break;
							}
				case 'D'://X!(factorial)
							{
							  res=0;
							  for(int i=0;i<a;i++)
							  {
									res+=a;
							  }
							  cout<<"Result=\t"<<res;
							  break;
							}
				case 'E'://log with base 10
							{
							  res=log10(a);
							  cout<<"Result=\t"<<res;
							  break;
							}
				case 'F'://log with base 2
							{
							  res=(log10(a)/log(a));
							  cout<<"Result=\t"<<res;
							  break;
							}
			 }
}

void calculatemorethan2operandsdifftype(int n)
{
	double a[100];
	double res=a[1];
	char oper[99];
	int i,j;
	gotoxy(0,23);
	for(i=0;i<n-1;i++)
	{
		cout<<"Enter number"<<(i+1)<<":\t";
		cin>>a[i];
		cout<<"Enter operand:\t";
		cin>>oper[i];
	}
	cout<<"Enter the last number:\t";
	cin>>a[n-1];
	for(i=0;i<=n;i++)
	{
		switch(oper[i])
		{
			case '+'://+
						 {
							res+=a[i+1];
							break;
						 }
				case '-'://-
						 {
							res-=a[i+1];
							break;
						 }
				case '*'://*
						 {
							res*=a[i+1];
							break;
						 }
				case '/':// /
						 {
							res/=a[i+1];
							break;
						 }
				case '%'://%
						 {
							int x,y;
							x=(a[i]);
							y=(a[i+1]);
							res=(int(a[i]) % int(a[i+1]));
							break;
						 }

		}
	}
	cout<<"\nResult =\t"<<res<<'\n';
}


void calculatemorethan2operandssametype(int n)
{
	double a[100];
	double res=0;
	char oper;
	int i,j;
	gotoxy(0,23);
	cout<<"Enter the operand:\t";
	cin>>oper;
	for(i=0;i<n;i++)
	{
		cout<<"Enter number"<<(i+1)<<":\t";
		cin>>a[i];
	}
		switch(oper)
		{
			case '+'://+
						 {
							for(i=0;i<n;i++)
							res+=a[i];
							break;
						 }
				case '-'://-
						 {
							res=a[1];
							for(i=0;i<n;i++)
							res-=a[i];
							break;
						 }
				case '*'://*
						 {
							res=1;
							res*=a[i];
							break;
						 }
				case '/':// /
						 {
							res=a[1];
							res/=a[i];
							break;
						 }
		}

	cout<<"\nResult =\t"<<res<<'\n';
}

