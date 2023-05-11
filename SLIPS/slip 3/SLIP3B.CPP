#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int n, v;
    cout<<"Enter number of numbers : ";
    cin>>n;

    ofstream even;
    even.open("Even.txt");
    ofstream odd;
    odd.open("Odd.txt");

    for(int i=0;i<n;i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>v;

        if((v%2) == 0)
            even<<v<<endl;
        else
            odd<<v<<endl;
    }

    even.close();
    odd.close();
    ifstream e("Even.txt"),o("Odd.txt");
    char z;
    cout<<endl<<endl<<"Even.txt = ";
    while(e>>z){
        cout<<z<<" ";
    }

    cout<<endl<<endl<<"Odd.txt = ";
    while(o>>z){
        cout<<z<<" ";
    }

    e.close();
    o.close();
    return 0;
}