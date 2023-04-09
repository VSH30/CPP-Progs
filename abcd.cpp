#include<iostream>
//#include<conio.h>

using namespace std;

class A{
    private:
        int x;
        static int count;
    public:
        A(){
            cout<<"Object "<<count++<<": "<<endl;
            cout<<"Enter x = ";
            cin>>x;
        }
        void getx(){
            cout<<"x = "<<x<<endl;
        }
};

int A::count = 1;

main(void){
    A arr[3];
    for(int i=0;i<3;i++)
        arr[i].getx();
    return 0;
}