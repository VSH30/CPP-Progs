#include<iostream.h>
#include<conio.h>

void main(){
	int x;
	clrscr();
	cout<<"Enter a number : ";
	cin>>x;
	(x%2==0)?cout<<"Even":cout<<"Odd";
	getch();
}