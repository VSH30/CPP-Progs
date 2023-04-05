#include<iostream>
#include<conio.h>

using namespace std;

/*class A{
    public:
        int b;
        A(){
            b=5;
        }
};

class B:public A{};

class C:public A{};

//class D:public B, public C{};
class D:public B{};

int main(){
    D o3;
    
    cout<<"Get var from first base: "<<o3.b<<endl;

    return 0;
}*/

class student{
    public:
        int roll_no;
        void set_rollno(int r){
            roll_no = r;
        }
        void get_rollno(){
            cout<<"The roll no is: "<<roll_no<<endl;
        }
};

class test:virtual public student{
    public:
        int ds, php;
        void set_marks(int d, int p){
            ds = d;
            php = p;
        }
        void get_marks(){
            cout<<"DS marks = "<<ds<<endl;
            cout<<"PHP marks = "<<php<<endl;
        }
};

class sports:public virtual student{
    public:
        int score;
        void set_score(int s){
            score = s;
        }
        void get_score(){
            cout<<"Sports Marks = "<<score<<endl;
        }
};

class result:public test, public sports{
    public:
        int total;
        void get_result(){
            total = ds + php + score;
            get_rollno();
            get_marks();
            get_score();
            cout<<"Total Marks = "<<total<<endl;
        }
};

int main(){
    result stud;

    stud.set_rollno(1);
    stud.set_marks(76,45);
    stud.set_score(32);
    //stud.set_total();

    stud.get_result();

    return 0;
}