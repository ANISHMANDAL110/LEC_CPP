#include <stdio.h>
int main(){
   int * pc, c;
    c = 5;
    pc = &c;
    printf("value of address of c is given by pointer c=variable %p",pc);
    printf("value of c is given by *pc  that is %d",*pc);
    return 0;
}
