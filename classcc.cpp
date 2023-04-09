#include<iostream>
#include<conio.h>

using namespace std;

class A{
    protected:
        int a;
    public:
        A(){
            cout<<"CON A"<<endl;
            cout<<"Enter a : ";
            cin>>a;
        }
};

class B:public A{
    protected:
        int b;
    public:
        B(){ 
            cout<<"CON B"<<endl;
            cout<<"Enter b : ";
            cin>>b;
        }
};

class C:public B{
    private:
        int c;
    public:
        C(){
            cout<<"CON C"<<endl;
            cout<<"Enter c : ";
            cin>>c;
        }
        void getnum(){
            cout<<"A = "<<a<<endl;
            cout<<"B = "<<b<<endl;
            cout<<"C = "<<c<<endl;
        }
};

int main(){
    C obj;
    obj.getnum();
    return 0;
}