// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <fcntl.h>

using namespace std;
int main() {
    ssize_t znak; 
    int k=0,fp,fp0;
    char inputBuff[100];
    
    char Name[] = "/home/Desktop/filePart.00";
    fp = open("/home/Dekstop/zad2.jpg",O_CREAT|O_WRONLY);
    char tab[] = "0001020304050607080910111213";
for(int i = 0; i<=13;i++)
{
    Name[36] = tab[k];
    Name[37] = tab[k+1];
    k=k+2;
    fp0 = open(Name,O_RDONLY);
    while(znak=read(fp0,inputBuff,1))
    {
        write(fp,inputBuff,znak);
    }
    close(fp0);
}
    close(fp);return 0;
}