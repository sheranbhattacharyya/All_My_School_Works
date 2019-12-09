#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<conio.h>
#include<ctype.h>
#include<iomanip.h>
#include<stdio.h>
#include<process.h>
#include<math.h>
#include<time.h>
int admin_or_sales;
void admin_password(void);
void sales_password(void);
void sales(void);
void admin(void);
void subscriber_fun();
void payment_fun_admin(void);
void subcriber_create();
void subcriber_modify();
void subscriber_search();
void subscriber_delete();
void subscriber_name-search();
void subscriber_no_search();
void subscriber_mobile_search();
void payment_fun_admin();
void paymet_view();
void read_details();
void outstanding();
void subscriber_view();
void payment_modify();
void payment_delete();
void pay_search_sub_no();
void pay_search_mobile_no();
void pay_search_bill_no();
void status_set();
void modify_payment();
int mod_or_create;
class date
{
	public:
	int m,d;
	long y;
	void getdate()
	{
		cout<<"\n Enter date: ";
		cin>>d;
		cout<<"\nEnter month(Enter the corresponding number of the month): ";
		cin>>m;
		cout<<"\n Enter year: ";
		cin>>y;
	}
	void putdate()
	{
		cout<<d<<"/"<<m<<"."<<y;
	}
}bill,paydate,duedate,today;
int correctdate(date x)
{
	int valid_date;
	valid_date=0;
	if(x.y<2015)
	{
		valid_date=1;
	}
	switch(x.m)
	{
		case 12:
		case 7:
		case 10:
		case 5:
		case 8:
		case 1:
		case 3:if(x.d<1||x.d>31)
				 {
					valid_date=1;
				 }
				 else
				 ;
				 break;
		case 2:if(x.d<1||x.d>29)
				 {
					valid_date=1;
				 }
				 else
				 ;
				 break;
		case 4:
		case 6:
		case 9:
		case 11:if(x.d<1||x.d>30)
				 {
					valid_date=1;
				 }
				 else
				 ;
				 break;
		default:valid_date=1;
				  break;
	}
	return valid_date;
};
int datecmp(date today,date duedate)
{
	int datecheck;
	if(today.y<dyedate.y)
	{
		datecheck=0;
	}
	else if(today.y==duedate.y)
	{
		if(today.m<duedate.m)
		{
			datecheck=0;
		}
		else if(today.m==duedate.m)
		{
			if(today.d<=duedate.d)
				datecheck=0;
			else
				datecheck=1;
		}
		else
			datecheck=1;
	}
	else
		datecheck=1;
	return datecheck;
}
int no_of_sub=0;
int s_no=0;
class subscriber
{
	long int pan_no_,credit_no;
	char permanent_address[30],corresponding_address[30];
	char city[10],state[20];
	char email_id[20];
	char scheme[40];
	char facilities_required[50];
	int validity;
	char bill_mode[mode[10],pay_mode[10];
	char status[10];
	int base_tariff;
	unsigned int subscriber_no[11];
	char mobile_no[11];
	char name[20];
	char product_type
	public:
		void req_details();
		unsigned int ret_sub_no()
		{
			return subscriber_no;
		}
		char* ret_mobile_no()
		{
			return mobile_no;
		}
		char* ret_sub_name()
		{
			return name;
		}
		char* ret product_type()
		{
			return product_type;
		}
		void input();
		void display();
		void modify_subscriber();
		void ipfacilities();
		void ipbill_mode();
		void ippay_mode();
		void ipstatus();
		void ippan_no()
		{
			cin>>pan_no;
		}
		void ipcredit_no()
		{
			cin>>credit_no;
		}
		void ippermanent_address()
		{
			gets(permanent_address);
		}
		void ipcorresponding_address();
		{
			gets(corresponding_address);
		}
		void ipcity()
		{
			gets(city);
		}
		void ipstate()
		{
			gets(state);
		}
		void ipmail_id()
		{
			gets(email);
		}
		void base_tariff()
		{
			cin>>base_tariff;
		}
		void ipvalidity()
		{
			cin>>validity()
		}
}s;

void subscriber::display()
{
	cout<<"\n\t\tName: 	"<<name;
	cout<<"\n\t\tSubscriber number:		"<<subscribe_no;
	cout<<"\n\t\tPermanent Address:		"<<permanent address;
	cout<<"\n\t\tMobile number:         "<<mobile_no;
	cout<<"\n\t\tCorresponding Address: "<<corressponding_address;
	cout<<"\n\t\tPancard number:        "<<pan_no;
	cout<<"\n\t\tState:                 "<<state;
	cout<<"\n\t\tCredit Card Number:    "<<credit_no;
	cout<<"\n\t\tCity:                  "<<city;
	cout<<"\n\t\tScheme:                "<<scheme;
	cout<<"\n\t\tEmail ID:              "<<email_id;
	cout<<"\n\t\tValidity:              "<<validity;
	cout<<"\n\t\tProduct type:          "<<product_type;
	cout<<"\n\t\tBill mode:             "<<bill_mode;
	cout<<"\n\t\tPayment mode           "<<pay_mode;
	cout<<"\n\t\tFacilities Required:   "<<facilities_required;
}
void subscriber::ipbill_mode()
{
	int choice5;
	int billmode_check=0;
	do
	{
		billmode_check=0;
		cout<<"\n Enter bill receiving mode: ";
		cout<<"\n1)Email";
		cout<<"\n2)Post";
		cout<<"\n3)SMS\n";
		cin>>choice5;
		switch(choice5)
			{
				case 1:strcpy(bill_mode,"Email");
						break;
				case 2:strcpy(bill_mode,"Post");
						break
				case 3;strcpy(bill_mode,"SMS");
						break;
				default:cout<<"\nEnter correct option";
						  billmode_check=1;
						  break;
			}
	}
	while(billmode_check==1);
}

void subscriber::ipstatus()
{
	int status_check=0;
	int choice3;
	do
	{
		cout<<"\nEnter status(1-2):";
		cout<<"\n1)Active:";
		cout<<"\n2)Inacive";
		cin>>choice3;
		switch(choice3)
		{
			case 1:strcpy(status,"Active");
					 break;
			case 2:strcpy(status,"Inactive");
					 break;
			default:cout<<"\nInvalid Option";
					 break;
		}
	}
	while(status_check==1);
}
void subscriber::ippay_mode()
{
	int paymode_check;
	int choice2;
	do
	{
		paymode_check=0;
		cout<<"\nEnter paymode(1-3):";
		cout<<"\n1)Internet";
		cout<<"\n2)Cash";
		cout<<"\n3)Cheque";
		cin>>choice2;
		switch(choice2)
		{
			case 1:strcpy(pay_mode,"Internet");
					 break;
			case 2:strcpy(pay_mode,"Cash");
					 break;
			case 3:strcpy(pay_mode,"Cheques");
					 break;
			default:cout<<"\n Invalid Option");
					  paymode_check=1;
					  break;
		}
	}
	while(paymode_check==1);
}
void subscriber::ipfacilities()
{
	int fac_reqd;
	int p,q,r=0,vidcalling=0,conf=0,sms=0;
	char morefac;
	do
	{
		p=0,q=0;
		cout<<"\nEnter facilites required:";
		cout<<"\n1)Video Calling";
		cout<<"\n2)Conference";
		cout<<"\n3)SMS";
		cin>>fac_reqd;
		switch(fac_reqd)
		{
			case 1:if(videocalling==0)
					 {
						strcpy(facilities_required,"video Calling");
						vidcalling=1;
						r++;
					 }
					 else
						cout<<"\nFacility already added";
						break;
			case 2:if(conf==0)
					 {
						strcpy(facilities_required,"Conference");
						conf=1;
						r++;
					 }
					 else
					 cout<<"\nFacilities already added";
					 break;
			case 3:if(sms==0)
					 {
						strcpy(facilities_required,"SMS");
						r++;
						sms=1;
					 }
					 else
                cout<<"\nFacilities already added";
					 break;
		}
		cout<<"\nDo you want more facilities??(y/n)\n";
		cin>>morefac;
		if(morefac=='y')
		{
			strcat(facilities_required,",");
			q=1;
		}
	}
   

					 e;




