#include<iostream.h>
#include<conio.h>

inline int max(int a, int b){
	return(a>b)?a:b;
}

void main(){
	clrscr();
	int x, y;
	cout<<"Enter x : ";
	cin>>x;
	cout<<"Enter y : ";
	cin>>y;

	int z=max(x,y);
	(z==x)?cout<<y:cout<<x;

	cout<<" is min"<<endl<<z<<" is max";
	getch();
}