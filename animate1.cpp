//animation 1
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void animation1(char a[20]);
void main()
{
	char a[50]={"Sheran is the best"};
	animation1(a);
}
void animation1(char a[50])
{
	int i,j;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;j<200;j++)
		{
			cout<<a[i]<<'\b';
			if(j==199)
			{
				cout<<a[i];
			}
		}
	}
}