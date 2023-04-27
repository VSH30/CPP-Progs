#include<iostream>

using namespace std;

class abc{
    private:
        int rno;
        char name[30], clas[20];
    public:
        friend istream &operator >> (istream &stream, abc &obj);
        friend ostream &operator << (ostream &stream, abc obj);
};

istream &operator >> (istream &take, abc &obj){
    cout<<"Enter Rno : ";
    take>>obj.rno;
    cout<<"Enter Name : ";
    take>>obj.name;
    cout<<"Enter class : ";
    take>>obj.clas;
    return take;
}

ostream &operator << (ostream &give, abc obj){
    give << endl << "Roll No = " << obj.rno << endl;
    give << "Name = " <<obj.name <<endl;
    give << "Class = " <<obj.clas <<endl;
    return give;
}

int main(){
    abc a;
    cin>>a;
    cout<<a;
    return 0;
}