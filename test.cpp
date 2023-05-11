#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    string a[10] = {"a","b","v"};
    char b[10];
    strcpy(b,a[1].c_str());
    cout<<a[1][0];
    return 0;
}