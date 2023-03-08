#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void change(int *a){
	cout<<"Enter new value : ";
	cin>>*a;
}

void main(){
	int arr[]={54,46,84,223,90},i;
	clrscr();

	cout<<endl<<"Array = "<<arr;

       /*cout<<endl<<"Enter position to modify : ";
	cin>>i;
	change(&arr[i-1]);
	cout<<endl<<"Updated Array = "<<arr;*/
	getch();
}