#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

int avg(int a, int b, int c){
	return((a+b+c)/3);
}
float avg(float a, float b, float c){
	return((a+b+c)/3);
}

void main(){
	int v=5, s=7, h=9;
	float l=4.6, m=7.89, n=9.7;
	clrscr();
	cout<<"Avg of "<<v<<","<<s<<","<<h<<" = "<<avg(v,s,h);
	cout<<endl;
	cout<<"Avg of "<<l<<","<<m<<","<<n<<" = "<<setprecision(2)<<avg(l,m,n);
	getch();
}