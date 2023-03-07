#include<iostream>
using namespace std;

main()
{
	int v, s;
	char op;
	
	cout<<"Enter a: ";
	cin>>v;
	cout<<"Enter b: ";
	cin>>s;
	cout<<"Enter symbol (+,-,*,/): ";
	cin>>op;
	
	switch(op){
		case '+':
			cout<<v<<" + "<<s<<" = "<<v+s;
			break;
		case '-':
			cout<<v<<" - "<<s<<" = "<<v-s;
			break;
		case '*':
			cout<<v<<" * "<<s<<" = "<<v*s;
			break;
		case '/':
			cout<<v<<" / "<<s<<" = "<<v/s;
			break;
		default:
			cout<<"INVALID OPTION!!!";
	}
}
