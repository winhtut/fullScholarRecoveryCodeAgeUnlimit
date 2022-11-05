//structure
// FIO
// pointer

// pointer store address of another variable

#include "stdio.h"

int main(){

    int* pc;
    int c;

    c = 10;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);

    //c = 10

    pc = &c;
    *pc = 100;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);

    printf("Testing");


    return 0;


}