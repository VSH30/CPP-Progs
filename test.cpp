#include<iostream>
#include<conio.h>

using namespace std;

class A{
    public:
        int x;
};
class B:virtual public A{
    public:
        B(){
            x=9;
            cout<<endl<<"class B";
        }
};
class C:virtual public A{
    public:
        C(){
            x=7;
            cout<<endl<<"class C";
        }
};
class D:virtual public A{
    public:
        D(){
            x=5;
            cout<<endl<<"class D";
        }
};
class E:public C, public D, public B{
    public:
        E(){
            cout<<endl<<"class E";
        }
};

int main(){
    E obj;
    cout<<endl<<obj.x;
    return 0;
}