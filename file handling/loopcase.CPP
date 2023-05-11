#include<iostream>

using namespace std;

int main(){
    string z = "Hello/All";
    cout<<"Len = "<<z.length()<<endl;
    cout<<"Pos = "<<z.find_last_of('/');
    return 0;
}