#include<iostream>
using namespace std;

int main()
{
	int v, x;
	cout<<"Enter a number: ";
	cin>>v;
	
	for(x=1;x<v;x++)
	{
		if(x>1 && v%x == 0){
			cout<<v<<" is NON PRIME";
			return 0;
		}
	}
	cout<<v<<" is PRIME";
	return 0;
}
