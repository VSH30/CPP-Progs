#include<iostream.h>
#include<conio.h>

void line(int n){
	if(n==0)
		return;
	else{
		cout<<"-";
		line(n-1);
	}
}
void main(){
	int i,arr[100];
	clrscr();
	for(i=0;i<100;i++){
		arr[i] = i+1;
	}
	for(i=0;i<100;i++){
		if(i%10==0){
			cout<<endl;
			line(50);
			cout<<endl;
		}
		if(arr[i]/10 == 0)
			cout<<"|  ";
		else if(arr[i]/100 == 0)
			cout<<"| ";
		else
			cout<<"|";
		cout<<arr[i]<<" ";
	}
	getch();
}