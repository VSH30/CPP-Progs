#include<iostream>
#include<fstream>

using namespace std;

class Student{
    private:
        int rno;
        char fname[30], lname[30];
    public:
        friend istream &operator >> (istream &in, Student &o);
        friend ostream &operator << (ostream &out, Student o);
};

istream &operator >> (istream &in, Student &o){
    cout<<"Enter name : ";
    in>>o.fname;
    cout<<"Enter last name : ";
    in>>o.lname;
    cout<<"Enter roll no : ";
    in>>o.rno;
    return in;
}

ostream &operator << (ostream &out, Student o){
    out<<o.rno<<" "<<o.fname<<" "<<o.lname;
}

int main(){
    int n;
    cout<<"Enter number of students : ";
    cin>>n;

    Student arr[n];
    for(int i=0;i<n;i++){
        cout<<"Student "<<i+1<<" Data :"<<endl;
        cin>>arr[i];
    }

    ofstream file("List.txt");
    for(int i=0;i<n;i++){
        file<<arr[i];
        if(i<n-1)
            cout<<endl;
    }
    file.close();

    ifstream f;
    f.open("List.txt");
    int rno;
    char fname[30], lname[30];
    while(!f.eof()){
        f>>rno>>fname>>lname;
        cout<<rno<<" "<<fname<<" "<<lname<<endl;
    }

    //cout<<arr[0]<<endl;
    return 0;
}