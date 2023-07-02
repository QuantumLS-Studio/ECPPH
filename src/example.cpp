#include "ECPPH.h"

int main(){
    clear(0);
    h("/",5,1);
    h("-",5,2);
    h("\\",5,3);
    h("|",5,4);
    h("*",5,5);
    print("Great ECPPH!",4,true);
    int x;
    cin>>x;
    print("Hello",1,false);
    print("World!",6,true);
    sleep(3);
    error();
    return 0;
}
