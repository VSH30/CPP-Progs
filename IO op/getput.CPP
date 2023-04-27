#include<iostream>
#include<conio.h>

using namespace std;

main(void){
    char c;
    int i;
    for(i=65;i<=90;i++){
        c = i;
        cout.put(c);
        cin.get(c);
    }
    cout<<endl;
    getch();
}