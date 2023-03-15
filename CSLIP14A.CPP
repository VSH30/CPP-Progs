#include<iostream.h>
#include<copnio.h>
#define pi 3.14

class Circle{
	private:
		int radius;
	public:
		Circle(){
			cout<<"Enter Radius of Circle: ";
			cin>>radius;
		}
		inline getradius(){
			return radius;
		}
		inline float dia(){
			return(2*radius);
		}
		inline float circumf(){
			return(2*pi*radius);
		}
		inline float area(){
			return(pi*radius*radius);
		}
};

void main(){
	clrscr();
	Circle a;
	cout<<endl<<"Radius of Circle = "<<a.getradius();
	cout<<endl<<"Diameter of Circle = "<<a.dia();
	cout<<endl<<"Circumference of Circle = "<<a.circumf();
	cout<<endl<<"Area of Circle = "<<a.area();
	getch();
}