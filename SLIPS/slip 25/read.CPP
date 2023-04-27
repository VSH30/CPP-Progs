#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream f("Lower.txt");
    string c;
    while(!f.eof()){
        getline(f,c);
        cout<<c<<endl;
    }
    return 0;
}