#include<iostream>

using namespace std;

/*template<class t>
t mul(t x, t y){
    return(x+y);
}*/

int mini(int a, int b){
    return(a>b)?a:b;
}

template<class t>
t mini(t a, t b){
    return(a<b)?a:b;
}

int main(){
    /*cout<<"3 + 2 = "<<mul(3,2)<<endl;
    cout<<"3.33 + 2.22 = "<<mul(3.33,2.22)<<endl;
    cout<<"-3 + (-2) = "<<mul(-3,-2)<<endl;
    cout<<"-----------------------"<<endl;*/
    cout<<"(int)min of 3,2 = "<<mini(3,2)<<endl;
    cout<<"(tem)min of 3.33,2.22 = "<<mini(3.33,2.22)<<endl;
    cout<<"(int)min of -3,-2 = "<<mini(-3,-2)<<endl;
    return 0;
}