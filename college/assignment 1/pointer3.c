#include <stdio.h>
int main(){
    int *pc,c;
    c = 10 ;
    printf("address if c is %p\n",&c);
    printf("value if c is %d\n",c);
    pc = &c;
    printf("address if pc is %p\n",&pc);
    printf("content if pc is %d\n",*pc);
    c=11;
    printf("address if c is %p\n",pc);
    printf("content if c is %d\n",*pc);
*pc = 2;
    printf("address if c is %p \n",&c);
    printf("value if c is %d\n",c);
    return 0;
}