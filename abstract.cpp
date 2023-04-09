#include<iostream>
#include<conio.h>

using namespace std;

class Shape{
    protected:
        int width, height;
    public:
        virtual int Area() = 0;
        void setval_width(int x){
            width = x;
        }
        void setval_height(int y){
            height = y;
        }
};

class Rectangle:public Shape{
    public:
        int Area(){
            return(width*height);
        }
};

class Triangle:public Shape{
    public:
        int Area(){
            return((width*height)/2);
        }
};

int main(){
    Rectangle R;
    Triangle T;
    
    R.setval_width(5);
    R.setval_height(4);

    T.setval_width(3);
    T.setval_height(2);

    cout<<"Area of Rectangle = "<<R.Area()<<endl;
    cout<<"Area of Triangle = "<<T.Area()<<endl;
    
    return 0;
}