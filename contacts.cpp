#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
void main()
{
ofstream f;
f.open("contacts.dat",ios::binary);
char str[20],ans='n';

 do
{    gets(str);
f<<str;
cin>>ans;
}while(ans=='y'||ans=='Y');
f.close();
int l=strlen(str)+1;
ifstream fin("contacts.dat",ios::binary);
 fin.getline(str,l);
 cout<<str;
 fin.close();
 }

























