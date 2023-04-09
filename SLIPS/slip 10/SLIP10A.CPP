#include<iostream>
#include<conio.h>

using namespace std;

class Account{
    private:
        int *acc_no, *balance;
        char acc_type[15];
    public:
        Account(){
            acc_no = new int;
            balance = new int;
            cout<<"Enter Acc no : "; cin>>*acc_no;
            cout<<"Enter Acc type : "; cin>>acc_type;
            cout<<"Enter Balance : "; cin>>*balance;
        }
        void disp(){
            cout<<"Acc no = "<<*acc_no<<endl;
            cout<<"Acc type = "<<acc_type<<endl;
            cout<<"Balance = "<<*balance<<endl;
        }
};

int main(){
    Account a;
    a.disp();
    return 0;
}