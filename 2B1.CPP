#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int n;
	cout<<"Enter n : ";
	cin>>n;

	float *arr;
	arr = new float[n];
	int i;
	for(i=0;i<n;i++){
		cout<<"Enter number "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Array = ";
	for(i=0;i<n;i+=2){
		cout<<arr[i]<<" ";
	}
	getch();
}