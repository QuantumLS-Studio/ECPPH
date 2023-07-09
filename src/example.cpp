#include "ECPPH.h"

int main(){
    clear(0);
    line("/",5,"no");
    line("-",5,"red");
    line("\\",5,"yellow");
    line("|",5,"green");
    line("*",5,"teal");
    print("Great ECPPH!","blue",true);
    boxc("ECPPH UI");
    print("Please enter any words","purple",true);
    string x;
    cin>>x;
    print("Hello","red",false);
    print("World!","blue",true);
    boxc("Hello ECPPH");
    sleep(3);
    error();
    return 0;
}
