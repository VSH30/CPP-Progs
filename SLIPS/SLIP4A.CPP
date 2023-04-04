#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Worker{
	private:
		char name[50];
		int nohrs, payrate, salary;
	public:
		Worker(){
			cout<<"Enter Worker Name: "; gets(name);
			cout<<"Hours Worked(Number): "; cin>>nohrs;
		    payrate=100;
			salary = nohrs*payrate;
		}

		void tsal(int x=100){
			payrate=x;
			cout<<"Salary of Worker "<<name<<" is "<<salary;
			cout<<endl<<"Total hours worked= "<<nohrs;
			cout<<endl<<"Payrate = "<<payrate;
		}
};

main(){
	//clrscr();
	Worker vsh;
	vsh.tsal();
	return 0;
}