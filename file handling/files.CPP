#include <iostream>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>

using namespace std;

int main(void) {
   DIR *dr;
   struct dirent *en;
   char path[50] = ".";
   dr = opendir(path); //open all directory
   string f;
   if (dr) {
      while ((en = readdir(dr)) != NULL) { 
        f = en->d_name;
        if(f.length()<5 || (".exe"!=(f.substr((f.length()-4),4))))
        cout<<" \n"<<f; //print all directory name

      }
      closedir(dr); //close all directory
   }
   return(0);
}