#include<iostream.h>
#include<conio.h>

inline int power(int a, int b=2){
	if(b==0)
		return 1;
	return a*(power(b-1));
}

void main()
{
	int x, y;
	clrscr();
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;

	cout<<x<<"^"<<y<<" = "<<power(x,y);
	getch();
}