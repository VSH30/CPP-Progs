#include<iostream>

using namespace std;

class base{
    public:
        void disp(){
            cout<<"Display = base"<<endl;
        }
        virtual void show(){
            cout<<"Show = base"<<endl;
        }
};

class derived:public base{
    public:
        void disp(){
            cout<<"Display = derived"<<endl;
        }
        void show(){
            cout<<"Show = derived"<<endl;
        }
};

int main(){
    base * ptr;
    derived obj;
    ptr = &obj;
    derived * dp;
    dp = &obj;
    /* (NOT POSSIBLE)
    derived * ptr;
    base obj;
    ptr = &obj
    */
    
    ptr->disp();
    obj.disp();
    dp->disp();
    ((derived*)ptr)->disp();
    
    cout<<endl;

    ptr->show();
    obj.show();
    dp->show();
    ((derived*)ptr)->show();

    return 0;
}