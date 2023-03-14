#include<iostream.h>
#include<conio.h>

void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

void main(){
	int x, y;
	clrscr();
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Ener second number: ";
	cin>>y;
	cout<<"Numbers are "<<x<<" and "<<y<<endl;
	swap(x,y);
	cout<<"Numbers after swapping are "<<x<<" and "<<y<<endl;
	getch();
}