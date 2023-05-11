#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    char path[50] = "D:/3.jpg";
    HINSTANCE hRet = ShellExecuteA(
            HWND_DESKTOP, //Parent window
            "open",       //Operation to perform
            path,       //Path to program
            NULL,         //Parameters
            NULL,         //Default directory
            SW_SHOW);     //How to open
 
            if((LONG)hRet <= 32)
            {
                MessageBox(HWND_DESKTOP,TEXT("Unable to play video"),TEXT(""),MB_OK);
            }   
    return 0;
}