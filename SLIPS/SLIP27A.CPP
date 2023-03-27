#include<iostream.h>
#include<conio.h>

class College{
	private:
		int cid, year;
		char cname[30], uname[30];
	public:
		College(){
			cout<<"Enter College ID: "; cin>>cid;
			cout<<"Enter College Name: "; cin>>cname;
			cout<<"Enter College Establishment_Year: "; cin>>year;
			cout<<"Enter University Name: "; cin>>uname;
		}
		void display(){
			cout<<"College ID: "<<cid<<endl;
			cout<<"College Name: "<<cname<<endl;
			cout<<"Establishment Year: "<<year<<endl;
			cout<<"University Name: "<<uname;
		}
};

void main(){
	clrscr();
	College a;
	a.display();
	getch();
}