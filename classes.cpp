#include<iostream>
#include<conio.h>

using namespace std;

class abc{
    private:
        int a=10;
    public:
        int b=5;
        void show(){
            cout<<"Show function"<<endl;
        }
    private:
        void display(){
            cout<<"Display function"<<endl;
        }
};

class der1:private virtual abc{
    public:
        void getb(){
            cout<<b<<endl;
        }
        void getshow(){
            show();
        }
};

class der2:public virtual abc{
};

class der3:public der1, public der2{
};

int main(){
    der1 o1;
    der2 o2;
    der3 o3;

  /*cout<<"Private derived public var: "<<o1.b<<endl;
    cout<<"Private derived private var: "<<o1.a<<endl;
    cout<<"Private derived public fun: "<<o1.show();
    cout<<"Private derived private fun: "<<o1.display();*/

    cout<<"Public derived public var: "<<o2.b<<endl;
    //cout<<"Public derived private var: "<<o2.a<<endl;
    cout<<"Public derived public fun: "<<endl;
    o2.show();
    //cout<<"Public derived private fun: "<<o2.display();

    cout<<"Get Public var from Private Derived: "; o1.getb();
    cout<<"Get Public fun from Private Derived: "<<endl;
    o1.getshow();

    cout<<"Get var from first base: "<<o3.b<<endl;
    o3.show();
    return 0;
}