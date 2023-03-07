#include<iostream>
using namespace std;

main()
{
	int v, s;
	cout<<"Enter a number: ";
	cin>>v;
	
	for(s=1;s<=10;s++){
		cout<<v<<" x "<<s<<" = "<<v*s<<endl;
	}
}
