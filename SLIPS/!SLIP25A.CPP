#include<iostream.h>
#include<conio.h>

inline float mean(int x, int y, int z){
	return((x+y+z)/3);
}
inline float mode(int x, int y, int z){
	return(
}
inline float median(int x, int y, int z){

}

void main(){
	int x, y, z;
	clrscr();
	cout<<"Enter first int: "; cin>>x;
	cout<<"Enter second int: "; cin>>y;
	cout<<"Enter third int: "; cin>>z;
	cout<<"Mean = "<<mean(x,y,z)<<endl;
	cout<<"Median = "<<median(x,y,z)<<endl;
	cout<<"Mode = "<<mode(x,y,z)<<endl;
	getch();
}