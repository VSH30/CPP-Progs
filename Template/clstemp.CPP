#include<iostream>

using namespace std;

template<class t1, class t2>

class A{
    private:
        t1 a; t2 b;
    public:
        void acc(){
            cout<<"Enter num : ";cin>>a;
            cout<<"Enter name : ";cin>>b;
        }
        void disp(){
            cout<<"Name = "<<b<<endl;
            cout<<"Num = "<<a;
        }
};

int main(){
    A<int, char[50]> obj;
    obj.acc();
    obj.disp();

    return 0;
}