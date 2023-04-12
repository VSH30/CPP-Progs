#include<iostream>
using namespace std;

class Count{
    int value;
    public:
        Count(){
            value = 5;
        }
        void operator ++(){
            ++value;
        }
        void operator ++(int x){
            value++;
        }
        void operator --(){
            --value;
        }
        void operator --(int x){
            value--;
        }
        void display(){
            cout<<"Count = "<<value<<endl;
        }
};

int main(){
    Count obj;
    obj.display();
    ++obj;
    obj.display();
    obj++;
    obj.display();
    --obj;
    obj.display();
    obj--;
    obj.display();
    return 0;
}