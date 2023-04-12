#include<iostream>

using namespace std;

class Complex{
    int real, img;
    public:
        Complex(){}
        Complex(int x, int y){
            real = x;
            img = y;
        }
        void display(){
            cout<<"Complex num = "<<real<<" + "<<img<<"i"<<endl;
        }
        Complex operator+(Complex obj){
            Complex temp;
            temp.img = img + obj.img;
            temp.real = real + obj.real;
            return temp;
        }
        Complex operator-(Complex obj){
            Complex temp;
            temp.img = img - obj.img;
            temp.real = real - obj.real;
            return temp;
        }
};

int main(){
    Complex a(5,-6),b(2,4);
    cout<<"A = ";
    a.display();
    cout<<"B = ";
    b.display();
    cout<<"A + B = ";
    (a+b).display();
    cout<<"A - B = ";
    (a-b).display();
    return 0;
}