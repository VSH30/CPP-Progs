#include<iostream>
#include<string.h>

using namespace std;

class MyString{
    private:
        char str[30];
    public:
        MyString(){
            cout<<"Enter String : ";
            gets(str);
        }
        char* getstr(){
            return str;
        }
        char* operator + (MyString a){
            return(strcat(str,a.str));
        }
};

int main(){
    cout<<"----------------------------------------------"<<endl;
    MyString x;
    MyString y;
    cout<<"----------------------------------------------"<<endl;
    cout<<"String 1 = "<<x.getstr()<<endl;
    cout<<"String 2 = "<<y.getstr()<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"String 1 + String 2 = "<<x+y<<endl;
    cout<<"----------------------------------------------"<<endl;
    return 0;
}