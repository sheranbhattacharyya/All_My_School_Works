#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip.h>
#include<process.h>

void calculate();
void calculate(double a, char oper, double b);
void calculate(double a, char oper);
void calculatemorethan2operandsdifftype(int n);
void calculatemorethan2operandssametype(int n);
int tictactoe();
void savecontact(char number[10]);
void showcontact();
void create_contact();

void main()
{
	int i,j,k,l,ch1,ch2,ch3,ch4,ch5,ch6,ch7;
	char number[30];
	Start:
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
	home:
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
	cout<<"Battery ";
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
	gotoxy(12,11);
	cout<<"(ENTER THE FOLLOWING KEYS TO PERFORM THE FOLLOWING FUNCTION)";
	choosethecorrectoption:
	cin>>ch1;
	switch(ch1)
	{
		case 1:// DIAL
				 clrscr();
				 gotoxy(10,9);
				 cout<<"1";
				 gotoxy(40,9);
				 cout<<"2";
				 gotoxy(70,9);
				 cout<<"3";
				 gotoxy(10,12);
				 cout<<"4";
				 gotoxy(40,12);
				 cout<<"5";
				 gotoxy(70,12);
				 cout<<"6";
				 gotoxy(10,15);
				 cout<<"7";
				 gotoxy(40,15);
				 cout<<"8",
				 gotoxy(70,15);
				 cout<<"9";
				 gotoxy(10,18);
				 cout<<"*";
				 gotoxy(40,18);
				 cout<<"0";
				 gotoxy(70,18);
				 cout<<"#";

				 choosethecorrectoption20:
				 gotoxy(0,0);
				 cout<<"PRESS 1 TO DIAL A PHONE NUMBER ELSE PRESS 0 TO RETURN HOME\t";
				 cin>>ch2;      //ch2 is used again in line 140//
				 if(ch2==1)
				 {
					;
				 }
				 else if(ch2==0)
				 {
					goto home;
				 }
				 else
				 {

					cerr<<"TRY AGAIN(PRESS 0 OR 1 ONLY)\t";
					goto choosethecorrectoption20;
				 }
				 Dial:
				 clrscr();
				 gotoxy(10,9);
				 cout<<"1";
				 gotoxy(40,9);
				 cout<<"2";
				 gotoxy(70,9);
				 cout<<"3";
				 gotoxy(10,12);
				 cout<<"4";
				 gotoxy(40,12);
				 cout<<"5";
				 gotoxy(70,12);
				 cout<<"6";
				 gotoxy(10,15);
				 cout<<"7";
				 gotoxy(40,15);
				 cout<<"8",
				 gotoxy(70,15);
				 cout<<"9";
				 gotoxy(10,18);
				 cout<<"*";
				 gotoxy(40,18);
				 cout<<"0";
				 gotoxy(70,18);
				 cout<<"#";

				 gotoxy(35,6);
				 cin>>number;
				 int n;
				 for(n=0;number[n]!='\0';n++);

				 gotoxy(0,22);
				 if(n>10)
				 {
					cerr<<"PLEASE ENTER A VALID NUMBER(IT SHOULD NOT CONTAIN MORE THAN 10 CHARACTERS)";
					getche();
					goto Dial;
				 }
				 else if(n<10)
				 {
					cerr<<"PLEASE ENTER A VALID NUMBER(IT SHOULD NOT CONTAIN LESS THAN 10 CHARACTERS)";
					getche();
					goto Dial;
				 }
				  if(n==10)
				 {
					 gotoxy(5,23);
					 cout<<"1.Call";
					 gotoxy(18,23);
					 cout<<"2.Save contact";
					 gotoxy(40,23);
					 cout<<"3.Send message";
					 gotoxy(60,23);
					 cout<<"4.BACK";
					 gotoxy(73,23);
					 cout<<"5.HOME";
					 int ch2;
					 choosethecorrectoption2:
					 gotoxy(40,24);
					 cin>>ch2;
					 switch(ch2)
					 {
						 case 1: //CALL
									{
										gotoxy(5,25);
										cerr<<"SIM CARD NOT INSERTED!!! PLEASE TRY AGAIN LATER AFTER PUTTING THE SIM CARD";
										getche();
										clrscr();
										gotoxy(10,9);
										cout<<"1";
										gotoxy(40,9);
										cout<<"2";
										gotoxy(70,9);
										cout<<"3";
										gotoxy(10,12);
										cout<<"4";
										gotoxy(40,12);
										cout<<"5";
										gotoxy(70,12);
										cout<<"6";
										gotoxy(10,15);
										cout<<"7";
										gotoxy(40,15);
										cout<<"8",
										gotoxy(70,15);
										cout<<"9";
										gotoxy(10,18);
										cout<<"*";
										gotoxy(40,18);
										cout<<"0";
										gotoxy(70,18);
										cout<<"#";

										goto Dial;
									}
						 case 2://SAVE CONTACT
									{
									gotoxy(60,40);
									savecontact(number);
									cout<<"Contact saved";
									getche();
									clrscr();
									goto Dial;

									}
						 case 3://SEND MESSAGE
								  {
										char message[1000];
										clrscr();
										cout<<"Write the message here(max. 1000 characters)(Press Enter to send message):";
										cin.getline(message,1000,'.');
										cout<<"\nMessage not sent. Please insert Sim Card and try again";
										getche();
										clrscr();
										gotoxy(10,9);
										cout<<"1";
										gotoxy(40,9);
										cout<<"2";
										gotoxy(70,9);
										cout<<"3";
										gotoxy(10,12);
										cout<<"4";
										gotoxy(40,12);
										cout<<"5";
										gotoxy(70,12);
										cout<<"6";
										gotoxy(10,15);
										cout<<"7";
										gotoxy(40,15);
										cout<<"8",
										gotoxy(70,15);
										cout<<"9";
										gotoxy(10,18);
										cout<<"*";
										gotoxy(40,18);
										cout<<"0";
										gotoxy(70,18);
										cout<<"#";

										goto Dial;
								  }
						 case 4://BACK
								  {
									goto Dial;
								  }
						 case 5://HOME
								  {
									goto home;
								  }
						 default:cerr<<"CHOOSE THE CORRECT OPTION AND RETRY AGAIN";
									goto choosethecorrectoption2;

					 }
				 }
				 goto home;

		case 2://MENU
				 Menu:
				 {
					clrscr();
					gotoxy(10,k=3);
					for(l=0;l<3;l++)
					{
						for(i=0;i<3;i++,k++)
						{
							gotoxy(15,k);
							for(j=0;j<5;j++)
							{
								cout<<"*";
							}
							for(j=0;j<20;j++)
							{
								cout<<" ";
							}
							for(j=0;j<5;j++)
							{
								cout<<"*";
							}
							for(j=0;j<20;j++)
							{
								cout<<" ";
							}
							for(j=0;j<5;j++)
							{
								cout<<"*";
							}
							cout<<"\n";
						}k+=4;
					}
					gotoxy(15,6);                //EXTRA APPS: APPLICATIONS:GAMES,MAPS,NOTES,CALCULATOR;
					cout<<"1.DIAL";               //OTHER APPS: MULTIMEDIA:CAMERA,RECORDER,GALLERY; FILE MANAGER;
					gotoxy(38,6);
					cout<<"2.Contacts";
					gotoxy(62,6);
					cout<<"3.Messaging";
					gotoxy(12,13);
					cout<<"4.File Manager";
					gotoxy(36,13);
					cout<<"5.MULTIMEDIA";
					gotoxy(60,13);
					cout<<"6.APPLICATIONS";
					gotoxy(13,20);
					cout<<"7.Settings";
					gotoxy(39,20);
					cout<<"8.EMAIL";
					gotoxy(60,20);
					cout<<"9.DEN DEN MUSHI";
					gotoxy(59,21);
					cout<<"INTERNET EXPLORER";
					gotoxy(39,24);
					cout<<"10.HOME";
					gotoxy(41,25);
					cin>>ch3;
					switch(ch3)
					{
						case 1://DIAL
								 clrscr();
								 gotoxy(10,9);
								 cout<<"1";
								 gotoxy(40,9);
								 cout<<"2";
								 gotoxy(70,9);
								 cout<<"3";
								 gotoxy(10,12);
								 cout<<"4";
								 gotoxy(40,12);
								 cout<<"5";
								 gotoxy(70,12);
								 cout<<"6";
								 gotoxy(10,15);
								 cout<<"7";
								 gotoxy(40,15);
								 cout<<"8",
								 gotoxy(70,15);
								 cout<<"9";
								 gotoxy(10,18);
								 cout<<"*";
								 gotoxy(40,18);
								 cout<<"0";
								 gotoxy(70,18);
								 cout<<"#";
								 goto Dial;
								 break;

						case 2://CONTACTS
						{
								Contacts:
								clrscr();
								//showcontact();
								cout<<"Contents are protected....Cannot be shown";
								getche();
								goto Menu;
								/*gotoxy(40,23);
								cout<<"1.Create";
								gotoxy(60,23);
								cout<<"2.Delete";
								gotoxy(40,25);
								cout<<"3.Back";
								char ch6;
								switch(ch6)
								{
									case 1:clrscr();
											 create_contact();
											 goto Contacts;
									case 2:clrscr();
											 gotoxy(25,13);
											 cout<<"Sorry,cant delete.....all no.s are VIP";
											 getche();
											 goto Contacts;
									case 3:goto home;
									default:{
												gotoxy(22,0);
												cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
												getche();
												clrscr();
												goto Contacts;
											  } */
						 }

						case 3://MESSAGING
								 Messaging:
								 clrscr();
								 gotoxy(40,0);
								 cout<<"Messaging";
								 gotoxy(5,5);
								 cout<<"1)Inbox";
								 gotoxy(5,7);
								 cout<<"2)Sent";
								 gotoxy(5,9);
								 cout<<"3)Create message";
								 gotoxy(5,11);
								 cout<<"4)Back";
								 gotoxy(40,13);
								 choosethecorrectoption3:
								 cin>>ch5;
								 switch(ch5)
								 {
									case 1:{
												clrscr();
												gotoxy(40,10);
												cout<<"No mesage in Inbox";
												getche();
												goto Messaging;
											 }
									case 2:{
												 clrscr();
												 gotoxy(40,20);
												 cout<<"No messages sent";
												 getche();
												 goto Messaging;
											 }
									case 3:{
												char message[1000];
												char number[10];
												clrscr();
												cout<<"To:";
												cin>>number;
												cout<<"\n\nWrite the message here(max. 1000 characters)(Press Enter to send message):";
												cin.getline(message,1000,'.');

												cout<<"\nMessage not sent. Please insert Sim Card and try again";
												getche();
												clrscr();
												goto Messaging;

											 }
									case 4:{
												goto Menu;
											 }
									default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
											  goto choosethecorrectoption3;
								 }

						case 4://FILE MANAGER
								 {
									Filemanager:
									clrscr();
									gotoxy(40,0);
									cout<<"FILE MANAGER";
									gotoxy(5,5);
									cout<<"1)C:PHONE MEMORY";
									gotoxy(5,7);
									cout<<"2)E:MEMORY CARD";
									gotoxy(5,9);
									cout<<"3)BACK";
									gotoxy(5,11);
									cin>>ch6;
									clrscr();
									switch(ch6)
									{
										case 1://PHONE MEMORY
												 Phonememory:
												 {
													gotoxy(40,0);
													cout<<"PHONE MEMORY";
													gotoxy(5,5);
													cout<<"1)Audio Files";
													gotoxy(5,7);
													cout<<"2)Video Files";
													gotoxy(5,9);
													cout<<"3)Images";
													gotoxy(5,11);
													cout<<"4)Notes";
													gotoxy(5,13);
													cout<<"5)Images";
													gotoxy(5,15);
													cout<<"6)BACK";
													gotoxy(40,17);
													choosethecorrectoption4:
													cin>>ch7;
													clrscr();
													switch(ch7)
													{
														case 1://AUDIO FILES
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO DATA(Empty)";
																	getche();
																	clrscr();
																	goto Phonememory;
																 }
														case 2://VIDEO FILES
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO DATA(Empty)";
																	getche();
																	clrscr();
																	goto Phonememory;
																 }
														case 3://IMAGES
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO DATA(Empty)";
																	getche();
																	clrscr();
																	goto Phonememory;
																 }
														case 4://NOTES
														case 5://IMAGES
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO DATA(Empty)";
																	getche();
																	clrscr();
																	goto Phonememory;
																 }
														case 6://BACK
																 clrscr();
																 goto Filemanager;

														default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
																  goto choosethecorrectoption4;
													}
												 }
										case 2://MEMORY CARD
													Memorycard:
													{
													gotoxy(40,0);
													cout<<"MEMORY CARD";
													gotoxy(5,5);
													cout<<"1)Audio Files";
													gotoxy(5,7);
													cout<<"2)Video Files";
													gotoxy(5,9);
													cout<<"3)Images";
													gotoxy(5,13);
													cout<<"4)Notes";
													gotoxy(5,15);
													cout<<"5)DCIM";
													gotoxy(5,17);
													cout<<"6)Downloads";
													gotoxy(5,19);
													cout<<"7)Movies";
													gotoxy(5,21);
													cout<<"8)Music";
													gotoxy(5,23);
													cout<<"9)Notifications";
													gotoxy(5,25);
													cout<<"10)Others";
													gotoxy(5,27);
													cout<<"11)BACK";

													gotoxy(40,29);
													choosethecorrectoption5:
													cin>>ch7;
													clrscr();
													switch(ch7)
													{
														case 1://AUDIO FILES
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO AUDIO FILES";
																	getche();
																	clrscr();
																	goto Memorycard;

																 }
														case 2://VIDEO FILES
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO VIDEO FILES";
																	getche();
																	clrscr();
																	goto Memorycard;
																 }
														case 3://IMAGES
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO IMAGES";
																	getche();
																	clrscr();
																	goto Memorycard;
																 }
														case 4://NOTES
                                          		 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO DATA(Empty)";
																	getche();
																	clrscr();
																	goto Memorycard;
																 }
														case 5://DCIM
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO DATA(Empty)";
																	getche();
																	clrscr();
																	goto Memorycard;
																 }

														case 6://DOWNLOADS
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO DATA(Empty)";
																	getche();
																	clrscr();
																	goto Memorycard;
																 }

														case 7://MOVIES
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO MOVIES AVAILABLE";
																	getche();
																	clrscr();
																	goto Memorycard;
																 }
														case 8://MUSIC
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO MUSIC DATA FILES";
																	getche();
																	clrscr();
																	goto Memorycard;
																 }
														case 9://NOTIFICATIONS
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO NOTIFICATIONS";
																	getche();
																	clrscr();
																	goto Memorycard;
																 }
														case 10://OTHERS
																 {
																	clrscr();
																	gotoxy(38,13);
																	cout<<"NO DATA(Empty)";
																	getche();
																	clrscr();
																	goto Memorycard;
																 }

														case 11://BACK
																 clrscr();
																 goto Filemanager;

														default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
																  goto choosethecorrectoption5;
														}
												 }
										case 3://BACK
												 clrscr();
												 goto Menu;

										default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
									}
								 }
						case 5://MULTIMEDIA
								 {
									Multimedia:
									clrscr();
									gotoxy(40,0);
									cout<<"MULTIMEDIA";
									gotoxy(5,5);
									cout<<"1)CAMERA";
									gotoxy(5,7);
									cout<<"2)Voice recorder";
									gotoxy(5,9);
									cout<<"3)GALLERY";
									gotoxy(5,11);
									cout<<"4)BACK";
									gotoxy(40,13);
									choosethecorrectoption6:
									cin>>ch5;
									clrscr();
									switch(ch5)
									{
										case 1://CAMERA
												 {
													clrscr();
													gotoxy(18,13);
													cout<<"Failed to connect to the camera.Try again later";
													getche();
													clrscr();
													goto Multimedia;
												 }
										case 2://VOICE RECORDER
												 {
													clrscr();
													gotoxy(15,13);
													cout<<"Failed to connect to the voice recorder.Try again later";
													getche();
													clrscr();
													goto Multimedia;
												 }
										case 3://GALLERY
												 {
													clrscr();
													gotoxy(38,13);
													cout<<"NO DATA(Empty)";
													getche();
													clrscr();
													goto Multimedia;
												 }
										case 4://BACK
												 clrscr();
												 goto Menu;

										default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
										goto choosethecorrectoption6;
									 }
								 }

						case 6://APPLICATIONS
								 Applications:
								 clrscr();
								 gotoxy(40,0);
								 cout<<"APPLICATIONS";
								 gotoxy(5,5);
								 cout<<"1)GAMES";
								 gotoxy(5,7);
								 cout<<"2)MAPS";
								 gotoxy(5,9);
								 cout<<"3)NOTES";
								 gotoxy(5,11);
								 cout<<"4)CALCULATOR";
								 gotoxy(5,13);
								 cout<<"5)BACK";
								 choosethecorrectoption7:
								 gotoxy(40,15);
								 cin>>ch4;
								 clrscr();

								 switch(ch4)
								 {
									case 1://GAMES
											 Games:clrscr();
											 gotoxy(40,0);
											 cout<<"GAMES";
											 gotoxy(5,5);
											 cout<<"1)TIC TAC TOE";
											 gotoxy(5,7);
											 cout<<"2)BACK";
											 gotoxy(40,9);
											 cin>>ch5;
											 switch(ch5)
											 {
												case 1: startoftictactoe:
														  clrscr();
														  tictactoe();
														  goto Games;

												case 2: goto Applications;

												default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
											 }

									case 2://MAPS
											 for(k=0;k<3;k++)
											 {
												clrscr();
												gotoxy(34,11);
												cout<<"Opening Maps";
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
											 gotoxy(30,9);
											 cout<<"Cannot open MAPS.";
											 gotoxy(17,11);
											 cout<<"Switch on the internet connection and try again";
											 getche();
											 clrscr();
											 goto Applications;


									case 3://NOTES
											 clrscr();
											 cout<<"Sorry this appliacation is yet to be developed";
                                  getche();
											 goto Applications;

									case 4://CALCULATOR
											  {
												  calculate();
												  goto Applications;
											  }
									case 5://Back
											 {
												  goto Menu;
											 }
									default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
										goto choosethecorrectoption7;
								 }


						case 7://SETTINGS
								 Settings:
								 clrscr();
								 gotoxy(40,0);
								 cout<<"SETTINGS";
								 gotoxy(5,5);
								 cout<<"1)SIM MAMAGEMENT";
								 gotoxy(5,7);
								 cout<<"2)DISPLAY";
								 gotoxy(5,9);
								 cout<<"3)ABOUT PHONE";
								 gotoxy(5,11);
								 cout<<"4)SWITCH OFF DEN DEN MUSHI MOBILE";
								 gotoxy(5,13);
								 cout<<"5)BACK";
								 gotoxy(40,15);
								 choosethecorrectoption8:
								 cin>>ch6;
								 switch(ch6)
								 {
									case 1://SIM MAMAGEMENT
											 clrscr();
											 gotoxy(5,12);
											 cout<<"No Sim cards available.Please insert a sim to continue";
											 getche();
											 goto Settings;

									case 2://DISPLAY
											 clrscr();
											 cout<<"Error directive: BGI graphics not supported under den den mushi";
											 getche();
											 goto Settings;

									case 3://ABOUT PHONE
											 clrscr();
											 gotoxy(35,0);
											 cout<<"About Phone";
											 gotoxy(5,5);
											 cout<<"Den Den Mushi Version\n";
											 gotoxy(5,6);
											 cout<<"2.0.1.5";
											 gotoxy(5,8);
											 cout<<"Model number";
											 gotoxy(5,9);
											 cout<<"SB04061997";
											 gotoxy(5,11);
											 cout<<"Created by";
											 gotoxy(5,12);
											 cout<<"Team 8";
											 getche();
											 goto Settings;

									case 4://SWITCH OFF DEN DEN MUSHI MOBILE
											 clrscr();
											 for(k=0;k<5;k++)
											 {
												gotoxy(30,9);
												cout<<"D E N  D E N  M U S H I";
												gotoxy(34,12);
												cout<<"Switching off";
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
												exit(1);



									case 5: goto Menu;

									default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
										goto choosethecorrectoption8;
								 }
						case 8://EMAIL
								 Email:
								 clrscr();
								 gotoxy(40,0);
								 cout<<"Email";
								 gotoxy(5,5);
								 cout<<"1)Inbox";
								 gotoxy(5,7);
								 cout<<"2)Sent";
								 gotoxy(5,9);
								 cout<<"3)Compose mail";
								 gotoxy(5,11);
								 cout<<"4)Back";
								 gotoxy(40,13);
								 choosethecorrectoption10:
								 cin>>ch5;
								 switch(ch5)
								 {
									case 1:{
												clrscr();
												gotoxy(40,10);
												cout<<"No mail in Inbox";
												getche();
												goto Messaging;
											 }
									case 2:{
												 clrscr();
												 gotoxy(40,20);
												 cout<<"No mail sent";
												 getche();
												 goto Messaging;
											 }
									case 3:{
												char message[1000];
												char email[100];
												clrscr();
												cout<<"To:";
												cin>>email;
												cout<<"\n\nWrite the message here(max. 1000 characters)(Press Enter to send message):";
												cin.getline(message,1000,'.');

												cout<<"\nEmail not sent. Please switch on the internet connection and try again";
												getche();
												clrscr();
												goto Email;

											 }
									case 4:{
												goto Menu;
											 }
									default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
											  goto choosethecorrectoption3;
								 }


						case 9://DEN DEN MUSHI INTERNET EXPLORER
								 clrscr();
								 for(k=0;k<6;k++)
								 {
									cout<<"www.dendenmushi.onepiece.com";
									gotoxy(34,10);
									cout<<"Loading";
									for(i=0;i<5;i++)
									{
										for(j=0;j<8000;j++)
										{
											cout<<".\b";
											if(j==7999)
											{
												cout<<".";
											}
										}
									}clrscr();
								 }
								 clrscr();
								 gotoxy(20,10);
								 cout<<"Cannot open www.dendenmushi.onepiece.com";
								 gotoxy(0,12);
								 cout<<"Connection Timeout Error.Call the administrator and fix your internet connection";
								 getche();
								 clrscr();
								 goto Menu;

						case 10://HOME
								  clrscr();
								  goto home;

						default:cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
								  getche();
								  goto choosethecorrectoption10;
					}
				}

		case 3://CONTACTS
					Contacts1:
					clrscr();
					//showcontact();
					cout<<"Contents are protected....Cannot be shown";
					getche();
					goto home;
					/*gotoxy(40,23);
					cout<<"1.Create";
					gotoxy(60,23);
					cout<<"2.Delete";
					gotoxy(40,25);
					cout<<"3.Back";
					char ch6;
					switch(ch6)
					{
						case 1:clrscr();
								 create_contact();
								 goto Contacts1;
						case 2:clrscr();
								 gotoxy(25,13);
								 cout<<"Sorry,cant delete.....all no.s are VIP";
								 getche();
								 //delete_contact();
								 goto Contacts1;
						case 3:goto home;
						default:{
										gotoxy(22,0);
										cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
										getche();
										clrscr();
										goto Contacts1;
									}
					}*/



		default:{
					 gotoxy(22,0);
					 cout<<"INVALID NUMBER! PLEASE ENTER A VALID NUMBER!";
					 getche();
					 clrscr();
					 goto home;
				  }
	}
}


class files
{
	public:
};


void savecontact(char number[10])
{
	clrscr();
	files a;
	ofstream f;
	char name[100][30];
	f.open("contacts.dat",ios::binary|ios::app);
	f.write((char*)&a,sizeof(a));
	cout<<"Enter name:\n";
	static int i=0;
	cin>>name[i];
	f<<name[i]<<'\n'<<number<<'\n';
	i++;
	f.close();
}


/*void showcontact()
{
  clrscr();
	files a;
	gotoxy(40,0);
	char name[100][30],number[10];
	int i;
	cout<<"All Contacts";
	gotoxy(0,5);
	ifstream f;
	f.open("contacts.dat",ios::binary|ios::in);
	f.read((char*)&a,sizeof(a));
	for(i=0;i<101;i++)
	{
		f>>name[i]>>number[i];
		cout<<i+1<<".\t"<<name[i]<<"\n \t"<<number[i]<<"\n\n";
	}
	f.close();
}*/

/*void create_contact()
{
	clrscr();
	files a;
	ofstream f;
	char name[100][30],number[100][10];
	f.open("contacts.dat",ios::binary|ios::app);
	f.write((char*)&a,sizeof(a));
	cout<<"Enter name:\n";
	static int i=0;
	cin>>name[i];
	cout<<"\nEnter number\n";
	cin>>number[i];
	f<<name[i]<<'\n'<<number[i]<<'\n';
	i++;
	f.close();
	cout<<"\n Contact created";
}*/

/*void delete_contact()
{
	clrscr();
	ofstream f;
	char name1[30],name[100][10],number[10];
	int i;
	f.open("contacts.dat",ios::binary|ios::app);
	f.read((char*)&a,sizeof(a));
	cout<<"Enter name:\n";
	cin>>name1;
	for(i=0;i<100;i++)
	{
		if(name[i]==name1)
		{
		}
	}
	f.close();
	cout<<"\n Contact created";
}
*/

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


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int tictactoe()
{
	int player = 1,i,choice;
	char mark;
	do
	{
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();

		player++;
	}while(i==-1);
	board();
	if(i==1)

		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}

/*********************************************

	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
						  && square[4] != '4' && square[5] != '5' && square[6] != '6'
						&& square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}


/*******************************************************************
	  FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
	clrscr();
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}

/*******************************************************************
				END OF PROJECT
********************************************************************/


