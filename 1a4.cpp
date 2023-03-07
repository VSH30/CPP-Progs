#include<iostream>
#include<math.h> 
using namespace std;

main()
{
	int v, start, end, x, t;
	
	cout<<"Enter start: ";
	cin>>start;
	cout<<"Enter end: ";
	cin>>end;
	cout<<"Armstrong nos = ";
	for(x=start;x<=end;x++){
		v=0;
		t=x;
		while(t>0){
			v = v + pow((t%10),3);
			t = t/10;
		}
		if(v==x)
			cout<<" "<<v;
	}
}
