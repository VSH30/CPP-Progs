#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main(){
    fstream f;
    const char *c = "sample.txt";
    f.open(c,ios::in);

    string s;
    while(!f.eof()){
        getline(f,s);
        cout<<s<<endl;
    }
    cout<<"----------WORDS---------"<<endl;
    f.seekg(0,ios::beg);
    while(!f.eof()){
        f>>s;
        cout<<s<<endl;
    }
    return 0;
}