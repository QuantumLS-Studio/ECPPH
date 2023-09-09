#include "../head/ECPPH.h"

int main(){
    clear();
    line("/",5,"none",true);
    line("-",5,"red",true);
    line("\\",5,"yellow",true);
    line("|",5,"green",true);
    line("*",5,"teal",true);
    print("Great ECPPH!","blue",true);
    boxout("ECPPH yes!","blue","green",true);
    print("Please enter any words","purple",true);
    string x;
    cin>>x;
    print("Hello","red",false);
    print("World!","blue",true);
    sleep(3);
    error();
    return 0;
}
