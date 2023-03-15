#include<iostream.h>
#include<conio.h>

class Point{
	private:
		int x, y;
	public:
		void setpoint(int, int);
		void showpoint();
};

void Point::setpoint(int a, int b){
	x = a;
	y = b;
}

void Point::showpoint(){
	cout<<"Co-ordinate of point = ("<<x<<","<<y<<")";
}

void main(){
	int v, s;
	clrscr();
	cout<<"Enter x co-ordinate: ";
	cin>>v;
	cout<<"Enter y co-ordinate: ";
	cin>>s;

	Point P;
	P.setpoint(v,s);
	P.showpoint();
	getch();
}