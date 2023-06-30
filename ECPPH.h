#include <iostream>

//Easy C++ Head

void error(){
    printf("\033[1,31mERROR!\033[0m","\n");
}

void clear(int i){
    if(i==0)
        system("clear");
    else if(i==1)
        system("CLS");
    else
        error();
}
