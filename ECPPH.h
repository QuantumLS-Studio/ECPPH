#include <iostream>
using namespace std;
//Easy C++ Head

void error(){
    cout<<"\033[1,31mERROR!\033[0m\a\n";
}

void clear(int i){
    if(i=='0')
        system("clear");
    if(i=='1')
        system("CLS");
}

void print(const char T[],int color,bool i){
    if(i==true){
        if(color==0)
            cout<<"\033[0m"<<T<<"\033[0m\n";
        if(color==1)
            cout<<"\033[31m"<<T<<"\033[0m\n";
        if(color==2)
            cout<<"\033[33m"<<T<<"\033[0m\n";
        if(color==3)
            cout<<"\033[32m"<<T<<"\033[0m\n";
        if(color==4)
            cout<<"\033[36m"<<T<<"\033[0m\n";
        if(color==5)
            cout<<"\033[34m"<<T<<"\033[0m\n";
        if(color==6)
            cout<<"\033[35m"<<T<<"\033[0m\n";
    }
    if(i==false){
        if(color==0)
            cout<<"\033[0m"<<T<<"\033[0m";
        if(color==1)
            cout<<"\033[31m"<<T<<"\033[0m";
        if(color==2)
            cout<<"\033[33m"<<T<<"\033[0m";
        if(color==3)
            cout<<"\033[32m"<<T<<"\033[0m";
        if(color==4)
            cout<<"\033[36m"<<T<<"\033[0m";
        if(color==5)
            cout<<"\033[34m"<<T<<"\033[0m";
        if(color==6)
            cout<<"\033[35m"<<T<<"\033[0m";
    }
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
