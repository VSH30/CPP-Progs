#include<iostream>
#include<string.h>

using namespace std;

class A{
    public:
        int a;
        string s;
    public:
        A(int x, string y){
            a=x;
            s=y;
        }
        A operator +(A obj){
            obj.a = a + obj.a;
            obj.s = s + obj.s;
            return obj;
        }
};

int main(){
    A x(5,"Hello"), y(7,"All");
    A z = x+y;

    cout<<"Obj1 a = "<<x.a<<endl;
    cout<<"Obj1 string = "<<x.s<<endl;
    
    cout<<"Obj2 a = "<<y.a<<endl;
    cout<<"Obj2 string = "<<y.s<<endl;
    
    cout<<"New obj a = "<<z.a<<endl;
    cout<<"New obj string = "<<z.s<<endl;
    
    return 0;
}