#include "ECPPH.h"

int main(){
    clear(0);
    h("/",5,"no");
    h("-",5,"red");
    h("\\",5,"yellow");
    h("|",5,"green");
    h("*",5,"teal");
    print("Great ECPPH!","blue",true);
    int x;
    cin>>x;
    print("Hello","red",false);
    print("World!","blue",true);
    sleep(3);
    error();
    return 0;
}
