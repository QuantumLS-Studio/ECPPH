#include "ECPPH.h"

int main(){
    clear(0);
    h("/",5,1);
    h("-",5,2);
    h("\\",5,3);
    h("|",5,4);
    h("*",5,5);
    int a;
    cin>>a;
    print("Hello",1,false);
    print("World!",6,true);
    error();
    return 0;
}
