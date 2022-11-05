//
// Created by National Cyber City on 9/21/2022.
//

#include "stdio.h"

int main(){
    int i=0;
    for(i=0 ; i<10 ; i++){

        for(int z=0 ;z < i  ; z++){

            printf("*");

        }
        for(int x=0 ; x<i ; x++){

            printf("#");
        }
        printf("\n");

    }


    return 0;
}