#include<iostream>

using namespace std;

class abc{
    int a;
    void geta(){
        cout<<"Getiing a = "<<a<<endl;
    }
    public:
        void showa(){
            cout<<"Showing a = "<<a<<endl;
        }
};

int main(){
    abc * ptr;
    abc obj;
    ptr = &obj;
    ptr->showa();
    //ptr->geta();

    abc * ptr2;
    ptr2 = new abc;
    ptr2->showa();
    //ptr2->a;
    return 0;
}