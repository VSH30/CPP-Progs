#include<iostream>
using namespace std;

void main()
{
	int n, v, f = 1;
	cout<<"Enter a number to find its factorial: ";
	cin>>n;
	cout<<endl<<"Factorial of "<<n<<" = ";
	
	if(n<1){
		cout<<"1";
		return 0;
	}
	
	for(v=1;v<=n;v++)
	{
		f = f*v;
	}
	cout<<f;
}
