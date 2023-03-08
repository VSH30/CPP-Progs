#include<iostream.h>
#include<conio.h>
int v=10;

void main(){
	int v=5;
	clrscr();
	cout<<"Local Var = "<<v<<endl<<"Global Var = "<<::v;
	getch();
}