#include<iostream.h>
#include<conio.h>

class Worker{
	private:
		char name[25];
		int nohrs, payrate, salary;
	public:
		Worker(){
			cout<<"Enter Worker Name: "; cin>>name;
			cout<<"Hours Worked(Number): "; cin>>nohrs;
			cout<<"Pay Rate: "; cin>>payrate;
		}

		void tsal(){
			cout<<"Salary of Worker "<<name<<" is "<<(nohrs*payrate);
		}
};

void main(){
	clrscr();
	Worker vsh;
	vsh.tsal();
	getch();
}