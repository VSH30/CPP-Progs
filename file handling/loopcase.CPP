#include<iostream>

using namespace std;

int main(){
    int ch, arr[150];
    do{
        for(int i=0;i<5;i++){
            cout<<i<<") "<<i<<endl;
            if(ch==99)
                exit(0);
        }
        cout<<99<<") Exit"<<endl;
        cout<<"Select : "; cin>>ch;
    }while(1);
    return 0;
}