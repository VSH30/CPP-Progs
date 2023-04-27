#include<iostream>

using namespace std;

class Base{
    public:
        void say(){
            cout<<"Base class it is!!!"<<endl;
        }
};

class Derived:public Base{
    public:
        void say(){
            cout<<"Derived class it is!!!"<<endl;
            Base::say();
        }
};

int main(){
    Base a;
    Derived b;
    cout<<"-------------------------------"<<endl;
    a.say();
    cout<<"-------------------------------"<<endl;
    b.say();
    cout<<"-------------------------------"<<endl;
    return 0;
}