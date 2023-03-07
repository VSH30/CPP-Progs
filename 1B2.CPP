#include<iostream.h>
#include<conio.h>

void main()
{
	int i, j, n=4;
	clrscr();
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			cout<<"   ";
		}
		for(j=n-i-1;j<n;j++){
			cout<<" * ";
		}
		cout<<endl;
	}
	getch();

}