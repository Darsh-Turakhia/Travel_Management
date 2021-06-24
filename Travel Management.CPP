#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<ctype.h>
#include<stdlib.h>
#include<iomanip.h>
long int code;
class persdetails  //class for collecting the personal details
{
  int trvlcode;
  int  age[20];
  char name[20][20];
  char add[50];
  char phnum[15];
  char gender[20];
  char passnum[10][10];
  char familyname[30];
  int num;
  int numppl;
  public:
  void p_input(int);
  void p_output();
  void givefam();
  int givecode();
  int give();
}pob;
int persdetails::give()
{
  return num;
}
void persdetails::givefam()
{
  cout<<familyname;
}
int persdetails::givecode()
{
  return trvlcode;
}
void persdetails::p_input(int cd)  //input func() of class1
{
  trvlcode=cd;
  num=0;
  clrscr();
  cout<<"\n\n\t:::::::::::::::::::::: PERSONAL DETAILS ::::::::::::::::::::::\n";
  cout<<"\t\t\t\t~~~~~~~~~~~~~~\n";
  cout<<"\n\t\t* Please fill in the details:\n\n\n\t\t\t1.Family Name: ";
  gets(familyname);
  cout<<"\n\t\t\t2.Address: ";
  gets(add);
  cout<<"\n\t\t\t3.Contact Number(10 Digit Mobile Number) : ";
  gets(phnum);
  cout<<"\n\n\n\t\tEnter The No of People Travelling: ";
  cin>>numppl;
  clrscr();
  if(numppl>0)
  {
	 cout<<"\n\t\tPlease Enter The Details of each Member/Members: "<<endl;
	 cout<<"\t\t\n";
	 for(int i=0;i<numppl;i++)
	 {
		cout<<endl<<"\n\t\tMember "<<i+1;
		cout<<"\n\t\t~~~~~~~~";
		cout<<"\n\n\t\tFirst Name: ";
		gets(name[i]);
		cout<<"\n\t\tAge: ";
		cin>>age[i];
		cout<<"\n\t\tGender(M/F): ";
		cin>>gender[i];
		cout<<"\n\t\tPassport Number: ";
		gets(passnum[i]);
		if(age[i]>5)
		{
	num++;    //to calculate no of travellers below 5 yrs
		}
	 }
  }
}
void persdetails::p_output() //output func() of class1
{
  clrscr();
  cout<<"\n\n\t******************** PERSONAL DETAILS ********************"<<endl;
  cout<<"\n\n\t\t\tFamily Name:\t "<<familyname<<endl;
  cout<<"\t\t\tAddress:\t "<<add<<endl;
  cout<<"\t\t\tPhone Number:\t "<<phnum<<endl;
  cout<<"\n\n\tName\t\tAge\t\tSex\t\tPassport Number\n"<<endl;
  for(int i=0;i<numppl;i++)
  {
	 cout<<"\t"<<name[i]<<"\t\t"<<age[i]<<"\t\t"<<gender[i]<<"\t\t"<<passnum[i]<<endl;
  }
  getch();
}
class travdetails   //class which holds the travel details
{
  int trvtcode;
  int day;
  int month;
  int year;
  int num1;
  int bdg_pt;
  int go_pt;
  int deck;
  int cabin;
  int pool;
  int gym;
  int sports;
  int salon;
  int spa;
  int theatre;
  public:
  void initial();
  void t_input(int);
  void t_output();
  void compute();
  int gtcode();
  void accept(int);
}tob;
void travdetails::initial()
{
  pool=gym=theatre=sports=salon=0;
}
void travdetails::accept(int c)
{
  num1=c;
}
int travdetails::gtcode()
{
  return trvtcode;
}
void travdetails::t_input(int cd) //input func()-class2
{
  tob.initial();
  trvtcode=cd;
  int i=1,opt;
  clrscr();
  do
  {
	 clrscr();
	 cout<<endl;
	 cout<<"\n\n\t\t\t\t_||__TRAVEL DETAILS__";
	 cout<<"\n\t\t\t\t\\___________________/";
	 cout<<"\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~";
	 cout<<"\n\n\t\tPlease enter the following details for your journey:";
	 cout<<"\n\n\t\t*Note:Options marked with '*' are compulsory.\n\t\t\tPlease do select them.";
	 cout<<"\n\n\n\t\t\t\t*1.Boarding Point\n\t\t\t\t*2.Destination\n\t\t\t\t*3.Date of Departure\n\t\t\t\t*4.Deck\n\t\t\t\t 5.Cabin\n\t\t\t\t 6.Swimming Pool\n\t\t\t\t 7.Gymnasuim\n\t\t\t\t 8.Sports\n\t\t\t\t 9.Salon\n\t\t\t\t 10.Spa\n\t\t\t\t 11.Theatre\n\t\t\t\t 12.Back\n\n\t\t\t\t ";
	 cin>>opt;
	 switch(opt)
	 {
		case 1:clrscr();
		  cout<<"\n\n\n\t\t\tSelect Boarding point:\n\n\t\t\t1.Mumbai\n\n\t\t\t2.Cochin\n\n\t\t\t3.Chennai\n\n\t\t\t ";
		  cin>>bdg_pt;
		  break;
		case 2:clrscr();
		  cout<<"\n\n\t\t\t****** Select Destination ******\n\n\n";
		  cout<<"\t 1.New York\t\t6.Dubai\t\t\t11.Antananariv";
		  cout<<"\n\n\t 2.Miami\t\t7.Lisbon\t\t12.Cairo\n\n";
		  cout<<"\t 3.Rio De Janeiro\t8.London\t\t13.Perth";
		  cout<<"\n\n\t 4.Colombo\t\t9.Copenhagen\t\t14.Sydney";
		  cout<<"\n\n\t 5.Hong Kong\t\t10.Cape Town\t\t15.Wellington\n\n\n\n\n\t\t\t\t  ";
		  cin>>go_pt;
		  break;
		case 3:clrscr();
		  cout<<"\n\n\t Date of Departure ";
		  cout<<"\n\n   * Note:Format for entering:Day(press enter)Month(press enter)Year *";
		  cout<<"\n\n\t\tEnter your preferred date of departure: ";
		  cin>>day;
		  gotoxy(59,7);   //to create a paricular format for entry
		  cout<<"/";
		  cin>>month;
		  gotoxy(62,7);
		  cout<<"/";
		  cin>>year;
		  break;
		case 4:clrscr();
		  cout<<"\n\n\t\t\tEnter The Choice OF Deck\n\n\t\t\t1.Top Deck\n\n\t\t\t2.Middle Decks\n\n\t\t\t3.Bottom Deck\n\n\t\t\t ";
		  cin>>deck;
		  break;
		case 5:clrscr();
		  cout<<"\n\n\t\t\tEnter The Choice Of Cabin\n\n\t\t\t1.AC\n\n\t\t\t2.Non AC\n\n\t\t\t ";
		  cin>>cabin;
		  break;
		case 6:clrscr();
		  cout<<"\n\n\t\tDo You Like To Avail The Facility Of A Swimming Pool\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
		  cin>>pool;
		  pool--;
		  break;
		case 7:clrscr();
		  cout<<"\n\n\t\tDo You Like To Avail The Facility Of A Gymnasium\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
		  cin>>gym;
		  gym--;
		  break;
		case 8:clrscr();
		  cout<<"\n\n\t\tDo You Like To Avail The Sports Facilities Offered\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
		  cin>>sports;
		  sports--;
		  break;
		case 9:clrscr();
		  cout<<"\n\n\t\tDo You Like To Avail The Facility Of Beauty Salon\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
		  cin>>salon;
		  salon--;
		  break;
	  case 10:clrscr();
		  cout<<"\n\n\tDo You Like To Avail The Facility Of Spa and Ayurvedic Treatment\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
		  cin>>spa;
		  spa--;
		  break;
	  case 11:clrscr();
		  cout<<"\n\n\t\tDo You Like To Avail The Facility Of Amphitheatre\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
		  cin>>theatre;
		  theatre--;
		  break;
	  case 12:i=0;
		  break;
	 }
  }while(i==1);
}
void boardpt(int c)  //for easy o/p
{
  if(c==1)
  cout<<"Mumbai\t";
  if(c==2)
  cout<<"Cochin\t";
  if(c==3)
  cout<<"Chennai\t";
}
void dest(int d)  //for easy o/p
{
  switch(d)
  {
	 case 1:cout<<"New York";
		break;
	 case 2:cout<<"Miami";
		break;
	 case 3:cout<<"Rio De Janero";
		break;
	 case 4:cout<<"Colombo";
		break;
	 case 5:cout<<"Hong Kong";
		break;
	 case 6:cout<<"Dubai";
		break;
	 case 7:cout<<"Lisbon";
		break;
	 case 8:cout<<"London";
		break;
	 case 9:cout<<"Copenhagen";
		break;
	case 10:cout<<"Cape Town";
		break;
	case 11:cout<<"Antananriv";
		break;
	case 12:cout<<"Cairo";
		break;
	case 13:cout<<"Perth";
		break;
	case 14:cout<<"Sydney";
	  break;
	case 15:cout<<"Willington";
	 break;
  }
}
void travdetails::t_output()  //output func()-class2
{
  clrscr();
  cout<<"\n\n\t******************* TRAVEL DETAILS *********************";
  cout<<"\n\n\t\tBoarding Point: ";
  boardpt(bdg_pt);
  cout<<"\n\n\t\tDestination: ";
  dest(go_pt);
  cout<<"\n\n\t\tDate of departure: ";
  cout<<day<<"/"<<month<<"/"<<year;
  cout<<"\n\n\t\tDeck: ";
  switch(deck)
  {
	 case 1:cout<<"Top Deck";
		break;
	 case 2:cout<<"Middle Deck";
		break;
	 case 3:cout<<"Bottom Deck";
		break;
  }
  cout<<"\n\n\t\tCabin: ";
  switch(cabin)
  {
	 case 1:cout<<"AC cabin";
		break;
	 case 2:cout<<"Non-AC cabin";
		break;
  }
  cout<<"\n\n\n\tFacilities availed for are:";
  if(pool==1)
  cout<<"\n\t\t\t\t    Swimming Pool";
  if(gym==1)
  cout<<"\n\t\t\t\t    Gymnasuim";
  if(sports==1)
  cout<<"\n\t\t\t\t    Sports Facilities";
  if(spa==1)
  cout<<"\n\t\t\t\t    Spa and Ayurvedic Treatment";
  if(salon==1)
  cout<<"\n\t\t\t\t    Beauty Salon";
  if(theatre==1)
  cout<<"\n\t\t\t\t    Theatre";
  getch();
}
void family(int c,int&flag)  //to display familyname+to check for record
{
  flag=0;
  clrscr();
  ifstream ifl("PersonalDetails.txt",ios::binary);
  if(!ifl)
  cout<<"\nError";
  ifl.read((char*)&pob,sizeof(pob));
  while(!ifl.eof())
  {
	 if(pob.givecode()==c)
	 {
		flag=1;
		break;
	 }
	 ifl.read((char*)&pob,sizeof(pob));
  }
  if(flag==1)
  {
	 cout<<"\n\n\t\t ****** ";
	 pob.givefam();
	 cout<<"'s FAMILY DATABASE ******";
  }
  else
  {
	 cout<<"\nError in locating record!!";
  }
  ifl.close();
}
void editp(int c)  //to edit persdetails
{
  ofstream ofl2("temp1.txt",ios::binary);
  if(!ofl2)
  cout<<"Error While Opening File";
  ifstream ifl4("PersonalDetails.txt",ios::binary);
  if(!ifl4)
  cout<<"Error While Opening File";
  ifl4.read((char*)&pob,sizeof(pob));
  while(!ifl4.eof())
  {
	 if(pob.givecode()==c)
	 {
		clrscr();
		cout<<"Please Enter the New details of the record"<<endl;
		pob.p_input(c);
		ofl2.write((char*)&pob,sizeof(pob));
		cout<<"\n\t\t\tModification Succesful!!!";
		ifl4.read((char*)&pob,sizeof(pob));
	 }
	 else
	 {
		ofl2.write((char*)&pob,sizeof(pob));
		ifl4.read((char*)&pob,sizeof(pob));
	 }
  }
  remove("PersonalDetails.txt");
  rename("temp1.txt","PersonalDetails.txt");
  ifl4.close();
  ofl2.close();
  getch();
}
void editt(int c)  //to edit travdetails
{
  ofstream ofl2("temp1.txt",ios::binary);
  if(!ofl2)
  cout<<"Error While Opening File";
  ifstream ifl4("TravelDetails.txt",ios::binary);
  if(!ifl4)
  cout<<"Error While Opening File";
  ifl4.read((char*)&tob,sizeof(tob));
  while(!ifl4.eof())
  {
	 if(tob.gtcode()==c)
	 {
		clrscr();
		cout<<"Please Enter the New details of the record"<<endl;
		tob.t_input(c);
		ofl2.write((char*)&tob,sizeof(tob));
		cout<<"\n\t\t\tModification Succesful!!!";
		ifl4.read((char*)&tob,sizeof(tob));
	 }
	 else
	 {
		ofl2.write((char*)&tob,sizeof(tob));
		ifl4.read((char*)&tob,sizeof(tob));
	 }
  }
  remove("TravelDetails.txt");
  rename("temp1.txt","TravelDetails.txt");
  ifl4.close();
  ofl2.close();
  getch();
}
void deletion(int c)  //common delete func()
{
  ofstream ofl2("temp1.txt",ios::binary);
  if(!ofl2)
  cout<<"Error While Opening File";
  ifstream ifl4("PersonalDetails.txt",ios::binary);
  if(!ifl4)
  cout<<"Error While Opening File";
  ifl4.read((char*)&pob,sizeof(pob));
  while(!ifl4.eof())
  {
	 if(pob.givecode()!=c)
	 {
		ofl2.write((char*)&pob,sizeof(pob));
	 }
	 ifl4.read((char*)&pob,sizeof(pob));
  }
  remove("PersonalDetails.txt");
  rename("temp1.txt","PersonalDetails.txt");
  ofl2.close();
  ifl4.close();
  ofstream ofl3("temp2.txt",ios::binary);
  if(!ofl3)
  cout<<"\nError While Opening File";
  ifstream ifl5("TravelDetails.txt",ios::binary);
  if(!ifl5)
  cout<<"\nError While Opening File";
  ifl5.read((char*)&tob,sizeof(tob));
  while(!ifl5.eof())
  {
	 if(tob.gtcode()!=c)
	 {
		ofl3.write((char*)&tob,sizeof(tob));
	 }
	 ifl5.read((char*)&tob,sizeof(tob));
  }
  ofl3.close();
  ifl5.close();
  remove("TravelDetails.txt");
  rename("temp1.txt","TravelDetails.txt");
  cout<<"\n\n\t\tDeletion Completed!";
  getch();
}
void travdetails::compute()   //compution+bill generation
{
  long int gttl=0,hr,dcst,dck,cabn,swpool=5000,gm=2000,spfts=7500,slon=6000,sp=20000,ttr=500;
  switch(go_pt)
  {
	 case 1:;
	 case 2:;
	 case 3:hr=30*24;
		dcst=250000;
		break;
	 case 4:;
	 case 5:;
	 case 6:hr=7*24;
		dcst=75000;
		break;
	 case 7:;
	 case 8:;
	 case 9:hr=24*24;
		dcst=130000;
		break;
	case 10:;
	case 11:;
	case 12:hr=15*24;
		dcst=100000;
		break;
	case 13:;
	case 14:;
	case 15:hr=12*24;
		dcst=120000;
		break;
  }
  switch(deck)
  {
	 case 1:dck=7500;
		break;
	 case 2:dck=5000;
		break;
	 case 3:dck=1000;
  }
  switch(cabin)
  {
	 case 1:cabn=5000;
		break;
	 case 2:cabn=2000;
		break;
  }
  clrscr();
  cout<<"\n\n\t\t:::::::::::::::::::::: BILL ::::::::::::::::::::::::::";
  cout<<"\n\n\t\tBoarding point:\t\t ";
  boardpt(bdg_pt);
  cout<<"\n\n\t\tDestination:\t\t ";
  dest(go_pt);
  cout<<"\n\n\t\tDate of Departure: ";
  cout<<day<<"/"<<month<<"/"<<year;
	hr=hr/24;         //to calculate date of arrival
  day=day+hr;
  if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
  {
	 if(day>31)
	 {
		month=month+1;
		day=day%31;
	 }
  }
  if(month==4||month==6||month==9||month==11)
  {
	 if(day>30)
	 {
		month=month+1;
		day=day%30;
	 }
  }
  if(month==2)
  {
	 if(day>28)
	 {
		month=month+1;
		day=day%28;
	 }
  }
  if(month==13)
  {
	 month=1;
	 year++;
  }
  cout<<"\n\n\t\tDate of Arrival: ";
  cout<<day<<"/"<<month<<"/"<<year;
  cout<<"\n\n\t\tSubject\t\tCost(for 1)\tNo of ppl\tTotal";
  cout<<"\n\n\t\tTravel\t\t"<<dcst<<"\t\t   "<<num1<<"\t\t"<<num1*dcst;
  gttl+=num1*dcst;
  cout<<"\n\t\tDeck\t\t"<<dck<<"\t\t   "<<num1<<"\t\t"<<dck*num1;
  gttl+=dck*num1;
  cout<<"\n\t\tCabin\t\t"<<cabn<<"\t\t   "<<num1<<"\t\t"<<cabn*num1;
  gttl+=cabn*num1;
  if(pool==1)
  {
	 cout<<"\n\t\tSwimming Pool\t"<<swpool<<"\t\t   "<<num1<<"\t\t"<<swpool*num1;
	 gttl+=swpool*num1;
  }
  if(gym==1)
  {
	 cout<<"\n\t\tGym\t\t"<<gm<<"\t\t   "<<num1<<"\t\t"<<gm*num1;
	 gttl+=gm*num1;
  }
  if(sports==1)
  {
	 cout<<"\n\t\tSports\t\t"<<spfts<<"\t\t   "<<num1<<"\t\t"<<spfts*num1;
	 gttl+=spfts*num1;
  }
  if(salon==1)
  {
	 cout<<"\n\t\tSalon\t\t"<<slon<<"\t\t   "<<num1<<"\t\t"<<slon*num1;
	 gttl+=slon*num1;
  }
  if(spa==1)
  {
	 cout<<"\n\t\tSpa\t\t"<<sp<<"\t\t   "<<num1<<"\t\t"<<sp*num1;
	 gttl+=dcst*num1;
  }
  if(theatre==1)
  {
	 cout<<"\n\t\tTheatre\t\t"<<ttr<<"\t\t   "<<num1<<"\t\t"<<ttr*num1;
	 gttl+=ttr*num1;
  }
  cout<<"\n\n\n\t\t\t Grand Total:Rs ";
  if(gttl>100000)     //to provide comma's for grandtotal
  {
	 cout<<gttl/100000<<",";
	 gttl=gttl%100000;
  }
  if(gttl>1000)
  {
	 cout<<gttl/1000<<",";
	 gttl=gttl%1000;
  }
  cout<<gttl;
  if(gttl<10)
  cout<<"00";
  cout<<" ";
  cout<<"\n\n\t! All Travellers below the age of 5 have not been charged !";
  getch();
}
void main()
{
  clrscr();
  cout<<"\n\n\n\n\n";   //welcome screen
  cout<<"              **      :::::::  !!!!!!!!           \n";
  cout<<"           _____  **      ::       !!    !!         _____  \n";
  cout<<"                **      ::       !!    !!                \n";
  cout<<"              ******  :::::::  !!!!!!!!            \n";
  cout<<"\n\n\n\n\n";
  cout<<"	      ~	__  ~ __  ~ __                  \n";
  cout<<"	       |==|  |==|  |==|                 \n";
  cout<<"	     __|__|__|__|__|__|_                \n";
  cout<<"	  __|___________________|___            \n";
  cout<<"       __|__[]__[]__[]__[]__[]__[]__|___         DARSH TURAKHIA\n";
  cout<<"      |............................o.../ \n";
  cout<<"      \\.............................../ \n";
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout<<" ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n";
  cout<<"  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~\n";
  cout<<"    ~    ~     ~    ~    ~    ~    ~    ~    ~  \n";
  cout<<"     ~    ~      ~    ~     ~    ~    ~      ~\n";
  ifstream fl("INITIALL.txt",ios::binary); //initialisation of code
  if(!fl)
  cout<<"\nError";
  fl.read((char*)&code,sizeof(code));
  fl.close();
  int opt,opt1,opt2,opt3,opt4;
  int acceptcode,flag;
  getch();
  clrscr();
  do
  {
	 clrscr();
	 cout<<"\n\n\t\t\n";
	 cout<<"\t\t ....WELCOME USERS....\n";
	 cout<<"\t\t\n\n\n";
	 cout<<"\t\t         \n";
	 cout<<"\t\t MAIN MENU \n";
	 cout<<"\t\t         \n\n";
	 cout<<"\n\t\t\tPlease select a kind of user:";
	 cout<<"\n\n\t\t\t\t1.New User\n\n\t\t\t\t2.Existing User\n\n\t\t\t\t3.Exit";
	 cout<<"\n\n\t\t\t\t ";
	 cin>>opt;
	 switch(opt)
	 {
		case 1:do
		  {
			 clrscr();
			 cout<<"\n\n\n\t\t\t\t    NEW USER\n";
			 cout<<"\t\t\t\t    ********\n\n";
			 cout<<"\n\n\t\t\tChoose the type of details you want to enter:";
			 cout<<"\n\n\t\t\t\t1.Personal Details\n\n\t\t\t\t2.Travel Details\n\n\t\t\t\t3.Back\n\n\t\t\t\t ";
			 cin>>opt1;
			 switch(opt1)
			 {
		 case 1:code++;
			pob.p_input(code);
			ofstream ofl("PersonalDetails.txt",ios::binary|ios::app);
			if(!ofl)
			cout<<"\n\n\t\tSorry.The File Cannot Be Opened For Writing"<<endl;
			ofl.write((char*)&pob,sizeof(pob));
			ofl.close();
			break;
		 case 2:tob.t_input(code);
			ofstream ofl1("TravelDetails.txt",ios::binary|ios::app);
			if(!ofl1)
			cout<<"\n\n\t\tSorry.The File Cannot Be Opened For Writing"<<endl;
			ofl1.write((char*)&tob,sizeof(tob));
			ofl1.close();
			clrscr();
			cout<<"\n\n\n\n!!!!!Your Details Have Been Registered.Please Make A Note Of This Code: "<<code;
			cout<<"\n\n* For modifications,Please visit 'existing user' section in the main screen";
			getch();
			break;
			 }
		  }while(opt1!=3);
		  break;
		case 2:clrscr();
		  cout<<"\n\n\t\t\t***** EXISTING USER *****\n\n\t\tPlease Enter The Travel Code That Was Given To You\n\n\t\t\t ";
		  cin>>acceptcode;
		  if(acceptcode>code)
		  {
			 cout<<"\nNo such record has been created!";
			 break;
		  }
		  family(acceptcode,flag);
		  cout<<endl<<endl<<"\t\t\t\tCode no:"<<acceptcode;
		  getch();
		  if(flag==1)
		  {
		  do
		  {
			 clrscr();
			 cout<<"\n\n\t\t\t@@@@@@@@@ Information Centre @@@@@@@@@";
			 cout<<"\n\t\t\t\t  ~~~~~~~~~~~~~~~~~";
			 cout<<"\n\n\tPlease select the type of operation that you would like to perform:";
			 cout<<"\n\n\t\t\t1.View Personal Details\n\n\t\t\t2.View Travel Details\n\n\t\t\t3.Edit Details\n\n\t\t\t4.Compute Bill\n\n\t\t\t5.Back\n\n\t\t\t ";
			 cin>>opt2;
			 switch(opt2)
			 {
		 case 1:ifstream ifl("PersonalDetails.txt",ios::binary);
			if(!ifl)
			cout<<"\nError";
			ifl.read((char*)&pob,sizeof(pob));
			while(!ifl.eof())
			{
			  if(pob.givecode()==acceptcode)
			  {
				 break;
			  }
			  ifl.read((char*)&pob,sizeof(pob));
			}
			pob.p_output();
			ifl.close();
			break;
		 case 2:ifstream ifl1("TravelDetails.txt",ios::binary);
			if(!ifl1)
			cout<<"\nError";
			ifl1.read((char*)&tob,sizeof(tob));
			while(!ifl1.eof())
			{
			  if(tob.gtcode()==acceptcode)
			  {
				 break;
			  }
			  ifl1.read((char*)&tob,sizeof(tob));
			}
			tob.t_output();
			ifl1.close();
			break;
		 case 3:do
			{
			  clrscr();
			  cout<<"\n\n\n\t Edit Details ";
			  cout<<"\n\n\t\tPlease select from among the editing options:\n\n";
			  cout<<"\t\t\t\t1.Modify\n\n\t\t\t\t2.Delete\n\n\t\t\t\t3.Back\n\n\t\t\t\t ";
			  cin>>opt3;
			  switch(opt3)
			  {
				 case 1:do
					{
					  clrscr();
					  cout<<"\n\n\t\t Modificaton \n";
					  cout<<"\t\t               ~~~~~~~~~~~";
					  cout<<"\n\n\tChoose The Type Of Details You Want To Modify:\n\n\t\t\t1.Personal Details\n\n\t\t\t2.Travel Details\n\n\t\t\t3.Back\n\n\t\t\t ";
					  cin>>opt4;
					  switch(opt4)
					  {
						 case 1:editp(acceptcode);
							break;
						 case 2:editt(acceptcode);
							break;
						 case 3:break;
					  }
					}while(opt4!=3);
					break;
				 case 2:deletion(acceptcode);
					opt3=3;
					opt2=5;
					break;
				 case 3:break;
			  }
			}while(opt3!=3);
			break;
		 case 4:ifstream ifl3("PersonalDetails.txt",ios::binary);
			if(!ifl3)
			cout<<"\nError";
			ifl3.read((char*)&pob,sizeof(pob));
			while(!ifl3.eof())
			{
			  if(pob.givecode()==acceptcode)
			  {
				 break;
			  }
			  ifl3.read((char*)&pob,sizeof(pob));
			}
			ifstream ifl2("TravelDetails.txt",ios::binary);
			if(!ifl2)
			cout<<"\nError";
			ifl2.read((char*)&tob,sizeof(tob));
			while(!ifl2.eof())
			{
			  if(tob.gtcode()==acceptcode)
			  {
				 break;
			  }
			  ifl2.read((char*)&tob,sizeof(tob));
			}
			tob.accept(pob.give());
			tob.compute();
			ifl2.close();
			break;
		 case 5:break;
			 }
		  }while(opt2!=5);
		  }
		  break;
		case 3:ofstream fil("INITIALL.txt",ios::binary); //storing code value
		  if(!fil)
		  cout<<"\nError";
		  fil.write((char*)&code,sizeof(code));
		  fil.close();
		  clrscr();
		  cout<<"\n\n";
		  cout<<"	         _/_/_/_/_/  _/                            _/            \n";
		  cout<<"	            _/      _/_/_/      _/_/_/  _/_/_/    _/  _/         \n";
		  cout<<"	           _/      _/    _/  _/    _/  _/    _/  _/_/            \n";
		  cout<<"	          _/      _/    _/  _/    _/  _/    _/  _/  _/           \n";
		  cout<<"	         _/      _/    _/    _/_/_/  _/    _/  _/    _/          \n";
		  cout<<"                                                                  \n";
		  cout<<"                                                                  \n";
		  cout<<"                                                                  \n";
		  cout<<"		         _/     _/                                       \n";
		  cout<<"		          _/  _/    _/_/    _/    _/                     \n";
		  cout<<"		            _/    _/    _/  _/    _/                     \n";
		  cout<<"		            _/    _/    _/  _/    _/                     \n";
		  cout<<"		           _/      _/_/      _/_/_/                     \n\n";
				 cout<<"\t    |===|						~~\n";
				 cout<<"   	   _|   |____________________________________________|| ||___	";
		  cout<<"\t\t    |_|_|_|_\__()____()____()______()______()_____()__||_||__/"<<endl;
		  cout<<"\t    `.==---------|_|----|_|-----|_|----|_|-----------------/"<<endl;
		  cout<<"\t      `.__________________________________________________/"<<endl;
		  cout<<"\t 																																			----DRASH TURAKHIA";
		  cout<<"..........oOoOo~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	 		cout<<".........oOoOo~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      cout<<".........oooo~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		  getch();
		  exit(0);
	 }
	 getch();
  }while(1); //infinite loop till exit selected
}





