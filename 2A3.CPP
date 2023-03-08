#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
	clrscr();
	int accno, cno;
	float bal, depo;
	char name[50], addr[50];

	cout<<"Enter Account No : "; cin>>accno;
	cout<<"Enter Name : "; cin>>name;
	cout<<"Enter Add : "; cin>>addr;
	cout<<"Enter Contact : "; cin>>cno;
	cout<<"Enter Balance : "; cin>>bal;

	cout<<endl;
	cout<<"Account No = "<<accno<<endl;
	cout<<"Name = "<<name<<endl;
	cout<<"Address = "<<addr<<endl;
	cout<<"Contact = "<<cno<<endl;
	cout<<"Balance = "<<bal<<endl<<endl;

	cout<<"Enter Amount to Deposit: : ";
	cin>>depo;
	bal+=depo;
	cout<<"Current Balance = "<<bal;
	getch();
}