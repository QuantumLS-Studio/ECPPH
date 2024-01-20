#include <iostream>
#include <cmath>
#include <limits>
#include <unistd.h>
#include <ctime>
#include <chrono>
#include <cstring>
#include <cstdio>
#include <ios>
#include <string>
#include <sys/types.h>
#include "cc.h"
using namespace std;

int error(){
    printf("\033[1,31mERROR!\033[0m\a\n");
    return 1;
}

void clear(){
    printf("\033[2J");
    printf("\033[0,0");
}

void print(const char T[],string color,bool i){
    if(i==true){
        if(color=="none")
            cout<<T<<"\n";
        if(color=="red")
            cout<<"\033[31m"<<T<<"\033[0m\n";
            /*cout<<FRED<<T<<NONE<<endl;*/
        if(color=="yellow")
            cout<<"\033[32m"<<T<<"\033[0m\n";
        if(color=="teal")
            cout<<"\033[36m"<<T<<"\033[0m\n";
        if(color=="blue")
            cout<<"\033[34m"<<T<<"\033[0m\n";
        if(color=="purple")
            cout<<"\033[35m"<<T<<"\033[0m\n";
        if(color=="white")
            cout<<"\033[0m"<<T<<"\033[0m\n";
        error;
    }
    if(i==false){
        if(color=="none")
            cout<<T;
        if(color=="red")
            cout<<"\033[31m"<<T<<"\033[0m";
        if(color=="yellow")
            cout<<"\033[33m"<<T<<"\033[0m";
        if(color=="green")
            cout<<"\033[32m"<<T<<"\033[0m";
        if(color=="teal")
            cout<<"\033[36m"<<T<<"\033[0m";
        if(color=="blue")
            cout<<"\033[34m"<<T<<"\033[0m";
        if(color=="purple")
            cout<<"\033[35m"<<T<<"\033[0m";
        if(color=="white")
            cout<<"\033[0m"<<T<<"\033[0m";
        error;
    }
    error;
}

void line(const char S[],int l,string color,bool i){
    if(l>0){
        while(l>1){
            print(S,color,false);
            l--;
        }
        print(S,color,i);
    }
    error;
}

void dash(const char T[]){
    cout<<" - "<<T<<endl;
}

void boxout(const char T[],string bc,string tc,bool i){
    int l=strlen(T);
    if(l > 0){
        print("+",bc,false);
        line("-",l+2,bc,false);
        print("+",bc,true);
        print("| ",bc,false);
        print(T,tc,false);
        print(" |",bc,true);
        print("+",bc,false);
        line("-",l+2,bc,false);
        print("+",bc,i);
    }
    error;
}
