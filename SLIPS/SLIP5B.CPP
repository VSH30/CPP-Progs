#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
#define pi 3.14

class Shape{
	public:
		virtual void area() = 0;
};

class Circle:Shape{
	private:
		int radius;
	public:
		Circle(){
		       cout<<"Enter radius of Circle: ";
		       cin>>radius;
		}
		void area(){
			cout<<"Area of Circle = ";
			cout<<setprecision(2)<<(pi*radius*radius)<<endl;
		}
};

class Sphere:Shape{
	private:
		int radius;
	public:
		Sphere(){
			cout<<"Enter radius of sphere: ";
			cin>>radius;
		}
		void area(){
			cout<<"Area of Sphere = ";
			cout<<setprecision(2)<<(4*pi*(pow(radius,2)))<<endl;
		}
};

class Cylinder:Shape{
	private:
		int radius, height;
	public:
		Cylinder(){
			cout<<"Enter radius of Cylinder: ";
			cin>>radius;
			cout<<"Enter height of Cylinder: ";
			cin>>height;
		}
		void area(){
			cout<<"Area of Cylinder = ";
			cout<<setprecision(2)<<(2*pi*radius*(radius+height))<<endl;
		}
};

void main(){
	clrscr();

	Circle v;
	Sphere s;
	Cylinder h;

	v.area();
	s.area();
	h.area();

	getch();
}