#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
//Easy C++ Head

void error(){
    cout<<"\033[1,31m"<<"ERROR!"<<"\033[0m\a\n";
}

void clear(int i){
    if(i=='0')
        system("clear");
    else if(i=='1')
        system("CLS");
    else
        error();
}

void print(const char T[],int color,bool i){
    if(i==true){
        if(color==0)
            cout<<T<<"\n";
        else if(color==1)
            cout<<"\033[31m"<<T<<"\033[0m\n";
        else if(color==2)
            cout<<"\033[33m"<<T<<"\033[0m\n";
        else if(color==3)
            cout<<"\033[32m"<<T<<"\033[0m\n";
        else if(color==4)
            cout<<"\033[36m"<<T<<"\033[0m\n";
        else if(color==5)
            cout<<"\033[34m"<<T<<"\033[0m\n";
        else if(color==6)
            cout<<"\033[35m"<<T<<"\033[0m\n";
        else if(color==7)
            cout<<"\033[0m"<<T<<"\033[0m\n";
        else
            error();
    }
    else if(i==false){
        if(color==0)
            cout<<T;
        else if(color==1)
            cout<<"\033[31m"<<T<<"\033[0m";
        else if(color==2)
            cout<<"\033[33m"<<T<<"\033[0m";
        else if(color==3)
            cout<<"\033[32m"<<T<<"\033[0m";
        else if(color==4)
            cout<<"\033[36m"<<T<<"\033[0m";
        else if(color==5)
            cout<<"\033[34m"<<T<<"\033[0m";
        else if(color==6)
            cout<<"\033[35m"<<T<<"\033[0m";
        else if(color==7)
            cout<<"\033[0m"<<T<<"\033[0m";
        else
            error();
    }
    else
        error();
}

void h(const char S[],int l,int c){
    if(l<=0)
        error();
    else{
        while(l>1){
            print(S,c,false);
            l--;
        }
        print(S,c,true);
    }
}
