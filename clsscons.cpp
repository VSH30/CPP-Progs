#include<iostream>
#include<conio.h>

using namespace std;

class A{
    protected:
        int a;
    public:
        A(int x){
            a=x;
            cout<<"CON A"<<endl;
        }
};

class B:public A{
    protected:
        int b;
    public:
        B(int x, int y):A(x){ 
            b=y;
            cout<<"CON B"<<endl;
        }
};

class C:public B{
    private:
        int c;
    public:
        C(int x, int y, int z):B(x,y){
            c=z;
            cout<<"CON C"<<endl;
        }
        void getnum(){
            cout<<"A = "<<a<<endl;
            cout<<"B = "<<b<<endl;
            cout<<"C = "<<c<<endl;
        }
};

int main(){
    C obj(5,6,7);
    obj.getnum();
    return 0;
}