#include<iostream>
using namespace std;

main()
{
	int v, r=0;
	cout<<"Enter number to rev: ";
	cin>>v;
	cout<<"Rev of "<<v<<" is ";
	while(v>0){
		r = r * 10 + (v%10);
		v = v / 10;
	}
	cout<<r;
}
