
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class stud{
	private:
		int rno,total, cn, os, advphp, cpp, jq, per;
		char name[30];
	public:
		void accept(){
			cout<<endl;
			cout<<"Enter Rno: "; cin>>rno;
			cout<<"Enter Name: "; cin>>name;
			cout<<"CN marks: "; cin>>cn;
			cout<<"OS marks: "; cin>>os;
			cout<<"AdvPHP marks: "; cin>>advphp;
			cout<<"CPP marks: "; cin>>cpp;
			cout<<"JQ marks: "; cin>>jq;
			total = cn+os+advphp+jq+cpp;
			per = total/5;
		}
		void marksheet(){
			cout<<endl<<endl;
			cout<<setw(15)<<"Name = "<<name<<endl;
			cout<<setw(15)<<"Roll No = "<<rno<<endl;
			cout<<setw(15)<<"Networking"<<endl;
		}
};

void main(){
	int n,i;
	stud a[10];
	clrscr();
	cout<<"Enter number of students: ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<endl<<endl<<"Enter details of student "<<(i+1)<<" : ";
		a[i].accept();
	}
	for(i=0;i<n;i++){
		a[i].marksheet();
	}
	getch();
}