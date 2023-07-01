#include <iostream>

//Easy C++ Head

void error(){
    printf("\033[1,31mERROR!\033[0m\a\n");
}

void clear(bool i){
    if(i==false)
        system("clear");
    if(i==true)
        system("CLS");
}

void print(const char a[],in b,bool i){
    if(i==true){
        if(b==0)
            printf("\033[0m"+a+"\033[0m\n");
        if(b==1)
            printf("\033[31m"+a+"\033[0m\n");
        if(b==2)
            printf("\033[32m"+a+"\033[0m\n");
    }
    if(i==false){
    if(i==true){
        if(b==0)
            printf("\033[0m"+a+"\033[0m");
        if(b==1)
            printf("\033[31m"+a+"\033[0m");
        if(b==2)
            printf("\033[32m"+a+"\033[0m");
    }
}
