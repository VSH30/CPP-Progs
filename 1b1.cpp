#include<iostream>
using namespace std;

main()
{
	int n=4, i, j;
	char c='A';
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			cout<<" "<<c;
			c=c+j;
		}
		cout<<endl;
	}
}
