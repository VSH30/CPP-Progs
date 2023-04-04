#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

inline float mean(int x[3]){
	return((x[0]+x[1]+x[2])/3);
}
inline float mode(int x[3]){
	return(x[(3+1)/2]);
}
inline float median(int x[3]){
	return((x[0]+x[1]+x[2])/3);
}

main(){
	int a[3];
	//clrscr();
	cout<<"Enter first int: "; cin>>a[0];
	cout<<"Enter second int: "; cin>>a[1];
	cout<<"Enter third int: "; cin>>a[2];
	sort(a,a+3);
	cout<<"Sorted Array = "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	cout<<"Mean = "<<mean(a)<<endl;
	cout<<"Median = "<<median(a)<<endl;
	cout<<"Mode = "<<mode(a)<<endl;
	//cout<<x[0]<<" "<<x[1]<<" "<<x[2];
	return 0;
}