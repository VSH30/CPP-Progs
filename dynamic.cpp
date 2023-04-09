#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int *arr;
    arr = new int(3);
    cout<<"Enter 1st no : "; cin>>arr[0];
    cout<<"Enter 2nd no : "; cin>>arr[1];
    cout<<"Enter 3rd no : "; cin>>arr[2];

    int i;
    for(i=0;i<3;i++)
        cout<<endl<<arr[i];
    return 0;
}