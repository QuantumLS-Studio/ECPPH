#include <iostream>

//Easy C++ Head

void error(){
    printf("\033[1,31mERROR!\033[0m","\n");
}

void clear(bool i){
    if(i==false)
        system("clear");
    if(i==true)
        system("CLS");
}

void print(const char a,char color[]={"RED","YELLOW","ORINGE","BLUE","GREEN","WHITE"},bool i){
    if(i==false){
        if(color="RED")
            printf("\033[31m"+a+"\033[0m")
        if(color="RED")
            printf("\033[31m"+a+"\033[0m");
    }
    if(i==true){
        if(color="RED")
            printf("\033[31m"+a+"\033[0m")
        if(color="RED")
            printf("\033[31m"+a+"\033[0m");
    }
}
