#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
class person
{
char name[30];
int age;
public:
void input()
{
gets(name);
cin>>age;
}
void display()
{
cout<<name<<" "<<age<<'\n';
}
};
void main()
{
ifstream f;
f.open("person.dat",ios::binary);
if(!f)
{
cerr<<"\n CO";
exit(1);
}
person p;
f.seekg(0,ios::end);
int endpos=f.tellg();
int n=endpos/sizeof(person);
cout<<"\n There are"<<n<<"persons in file";
cout<<"\n enter person no. to search for";
cin>>n;
int pos=(n-1)*sizeof(person);
f.seekg(pos);
f.read((char*)&p,sizeof(p));
p.display();
f.close();
}
