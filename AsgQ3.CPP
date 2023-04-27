#include<iostream>
using namespace std;

class Book{
    private:
        int B_id;
        static int count;
        char B_Name[30], B_Author[30], B_Publication[30];
    public:
        void accept(){
            count++; //keep count of books
            cout<<endl<<"Enter Book ID : "; cin>>B_id;
            cout<<"Enter Book Name : "; cin>>B_Name;
            cout<<"Enter Book Author : "; cin>>B_Author;
            cout<<"Enter Book Publication : "; cin>>B_Publication;
        }
        void display(){
            cout<<endl<<"Book ID = "<<B_id<<endl;
            cout<<"Book Name = "<<B_Name<<endl;
            cout<<"Book Author = "<<B_Author<<endl;
            cout<<"Book Publication = "<<B_Publication<<endl;
        }
        int getcount(){
            return count;
        }
};

//Initialize count of books to 0
int Book::count = 0;

int main(){
    Book arr[10];
    int n;
    cout<<"Enter number of Books : ";
    cin>>n;

    for(int i=0;i<n;i++)
        arr[i].accept();

    cout<<endl<<"Details of Books : "<<endl;

    for(int i=0;i<n;i++)
        arr[i].display();

    cout<<endl<<"Count of Books = "<<arr[0].getcount()<<endl; //We can take any book
}