#include<iostream>
#include<stdlib.h>
using namespace std;
class employee{
    int empcode;
    protected:float salary;
    char name[20];
    public :void getin(){
        cout<<"\nEnter the employee code :";
        cin>>empcode;
        cout<<"Enter the name of employee:";
        cin>>name;
    }
    void show(){
        cout<<"Employee code:"<<empcode<<endl;
        cout<<"Name of the employee :"<<name<<endl;
        
    }
};
class fulltime :  public employee{
    int wage,nod;
    public : void getw(){
        getin();
        cout<<"Enter the wages per day:";
        cin>>wage;
        cout<<"Enter the no. of days:";
        cin>>nod;
    }
    void calsal(){
        salary=wage*nod;
        cout<<"\nSalary of employee :"<<salary<<endl;
    }
    void showw(){
        show();
        cout<<"Wages of employee :"<<wage<<endl;
        cout<<"No. of days worked by employee"<<nod<<endl;
    }
};
class parttime :public employee{
    int noh,hw;
     public : void getwp(){
        getin();
        cout<<"Enter the wages per hour:";
        cin>>hw;
        cout<<"Enter the no. of hours:";
        cin>>noh;
    }
     void calsalw(){
       salary=hw*noh;
       cout<<"\nSalary of employee :"<<salary<<endl;
    }
    void showww(){
        show();
        cout<<"Wages of employee :"<<hw<<endl;
        cout<<"No. of hour worked by employee:"<<noh<<endl;
    }
};
int main(){
int ch,p,f;
cout<<"Enter the total no of employee for part time work type:";cin>>p;
cout<<"Enter the total no of employee for part time work type:";cin>>f;
fulltime f1[f];
parttime p1[p];
while(1){
    cout<<"\n1.Accept the detail and print salary\n2.Display the detail of n employee\n3.Display salary having maximum salary in both type of work\n4.Exit from menu\n";
    cout<<"Enter you choice"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
       for(int i=0;i<f;i++){
        f1[i].getw();
       }
        cout<<"____________________________________________";
       for(int k=0;k<f;k++){
        f1[k].calsal();
       }
        cout<<"____________________________________________";
       for(int i=0;i<p;i++){
        p1[i].getwp();
       }
       cout<<"____________________________________________";
        for(int k=0;k<p;k++){
        p1[k].calsalw();
       }
       cout<<"____________________________________________";
        break;
        case 2:
        for(int i=0;i<f;i++){
            f1[i].showw();
        }
        cout<<"____________________________________________";
        for(int k=0;k<p;k++){
            p1[k].showww();
        }
        break;
        case 3:
        break;
        case 4:
        cout<<"Okay bye";
        exit(0);
        break;
        default:
        cout<<"\nInvalid choice\n";

    }
}
    return 0;
}