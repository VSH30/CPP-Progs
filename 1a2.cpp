#include<iostream>
using namespace std;

main()
{
	int v=0, s=1, i=2, n, t;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Fibonacci series = "<<v<<" "<<s;
	for(i=2;i<n;i++){
		t = s;
		s = v + s;
		v = t;
		cout<<" "<<s;
	}
}
