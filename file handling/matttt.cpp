#include<iostream>
using namespace std;
class matrix{
    int **p,r,c;
    public :matrix(){
        cout<<"Enter the total no. of rows:";
        cin>>r;
        cout<<"Enter the total no. of columns:";
        cin>>c;
          p=new int*[r];
        for(int j=0;j<r;j++){
            p[j]=new int [c];
        }
    }
    void accept();
    void display();
    void discal();
    
};
void matrix::accept(){
      
        cout<<"Enter the matrix element of"<<r<<"x"<<c<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>p[i][j];
            }
        }
    }
    void matrix::display(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<p[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    void matrix::discal(){
        cout<<"__________\n";
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                cout<<p[j][i]<<"\t";
            }
            cout<<endl;
        }
    }
int main(){
    matrix m1;
    int ch;
    while(1){
        cout<<"Choose your option\n";
        cout<<"\n1.Accept details of matrix\n2.Display details of matrix\n3.Calculate transpose of matrix\n4.Exit\n";
        cin>>ch;
        switch(ch){
            case  1:
    m1.accept();
    break;
    case 2:
    m1.display();
    break;
    case 3:
    m1.discal();
    break;
    case 4:
    exit(0);
    break;
        }
    }
    return 0;
}
