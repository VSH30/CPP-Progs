#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>

void main(){
	clrscr();
	int choice;
	while(1){
		cout<<"--Menu--"<<endl;
		cout<<"1.Accept Book Details"<<endl;
		cout<<"2.Sale a book"<<endl;
		cout<<"3.Purchase a book"<<endl<<endl;
		cout<<"Enter choice : ";
		cin>>choice;
		char title[50], publisher[50];
		int price, stock;
		char *author;
		author = new char[50];

		cout<<"Enter author : ";
		gets(author);
		cout<<author;
	getch();
}