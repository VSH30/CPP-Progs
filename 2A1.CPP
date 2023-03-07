#include<iostream.h>
#include<conio.h>

inline int perimeter(int x, int y){
	return((2*x)+(2*y));
}
inline int area(int x, int y){
	return(x*y);
}

void main(){
	int l, b;
	clrscr();
	cout<<"Enter lenght: ";
	cin>>l;
	cout<<"Enter breadth: ";
	cin>>b;
	cout<<"Perimeter = "<<perimeter(l,b)<<endl;
	cout<<"Area = "<<area(l,b);
	getch();
}