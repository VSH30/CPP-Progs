#include <iostream>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(void) {
    DIR *dr;
    struct dirent *en;
    jump:
    int prog;
    char path[200];
    system("CLS");
    cout<<"Select a Programming Language : ";
    cout<<endl<<"1. Adv PHP"<<endl<<"2. CPP"<<endl<<"3. Data Structure"<<endl<<"4. JAVA"<<endl<<"5. R Programming"<<endl<<"6. jQuery"<<endl<<"7. PHP"<<endl<<"0. Exit"<<endl<<endl<<"Enter choice : ";

    cin>>prog;

    if(prog==1)
        strcpy(path,"C:/wamp64/www/SYBBACA(SEM IV)");
    else if(prog==2)
        strcpy(path,"C:/TURBOC3/BIN/SEM-IV");
    else if(prog==3)
        strcpy(path,"C:/Users/HP/Desktop/DEVC");
    else if(prog==4)
        strcpy(path,"D:/Java");
    else if(prog==5)
        strcpy(path,"C:/Users/HP/Documents/R/VSH(R)");
    else if(prog==6)
        strcpy(path,"C:/wamp64/www/jQuery");
    else if(prog==7)
    	strcpy(path,"C:/wamp64/www/VSH");
    else if(prog==0)
        return 0;
    else
        goto jump;
    
    dr = opendir(path);

    char f[150][50];
    string z;
    char t[50];
    int op,num=-1;

    if (dr) {
        do{
            dr = opendir(path);
            system("CLS");
            cout<<endl<<"PATH = "<<path<<endl;
            cout<<endl<<"PATH = "<<z<<endl;
            cout<<endl<<"-----------------------MENU-----------------------"<<endl;
            while((en = readdir(dr)) != NULL) {
                strcpy(t,en->d_name);
                z = (string)t;
                if(strlen(t)<5 || (".exe"!=(z.substr((z.length()-4),4)))){
                    num++;
                    strcpy(f[num],t);
                    cout<<num<<") "<<f[num]<<endl;
                }
            }
            cout<<99<<") Main Menu"<<endl<<endl;
            cout<<"Enter Choice : "; cin>>op;
            if(op==99)
                goto jump;
            if(op>=0 && op<=num){
                strcpy(t,"/");
                strcat(t,f[op]);
                char forfile[100];
                strcpy(forfile,path);
                strcat(forfile,t);
                ifstream file(forfile);
                if(file){
                    system("CLS");
                    cout<<endl<<"-----------------------"<<f[op]<<"--------------------------"<<endl<<endl;
                    while(!file.eof()){
                        getline(file,z);
                        cout<<z<<endl;
                    }
                    cout<<endl<<"--------------------------------------------------------------"<<endl;
                    cout<<"Enter 1 to continue OR 0 for Main Menu"<<endl;
                    cin>>op;
                    if(op==0)
                        goto jump;
                }else{
                    if(op==1){
                        z = (string)path;
                        z = z.substr(0,(z.find_last_of('/')));
                        strcpy(path,z.c_str());
                    }else if(op==0){
                       //do nothing
                    }else{
                    strcat(path,"/");
                    strcat(path,f[op]);
                    }
                }
                num=-1;
                if(strlen(path)<3)
                    goto jump;
            }else
                cout<<"INVALID OPTION!!!"<<endl;
        }while(1);
        closedir(dr);
    }
    return(0);
}
