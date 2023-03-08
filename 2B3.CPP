#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

float pi=3.14;

inline float area(int r=5){
	return(::pi*r*r);
}
inline float circumference(int r=5){
	return(2*::pi*r);
}

void main(){
	int r;
	clrscr();
	cout<<"Enter Radius : ";
	cin>>r;
	cout<<"Area = "<<setprecision(2)<<area(r)<<endl;
	cout<<"Circumference(Default r=5) = "<<setprecision(2)<<circumference();
	getch();
}