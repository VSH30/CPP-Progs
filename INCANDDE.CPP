#include<iostream.h>
#include<conio.h>

void main()
{
	int v, s;
	clrscr();
	v = 1;

	cout<<v<<endl;
	s = ++v;
	cout<<v<<" and "<<s<<endl;
	s = v++;
	cout<<v<<" and "<<s<<endl;
	getch();
}