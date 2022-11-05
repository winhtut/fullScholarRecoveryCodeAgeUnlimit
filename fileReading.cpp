//
// Created by National Cyber City on 9/5/2022.
//

//
// Created by National Cyber City on 9/5/2022.
//

#include "stdio.h"
#include "stdlib.h"

int main(){

    int number;
    char c;
    FILE *fptr;
    int count=0;

    fptr =fopen("filelesson.txt","r");

    if(fptr == NULL){

        printf("File cannot open!");
        exit(1);

    }
    while (1){
        c =getc(fptr);
        if(  c == EOF) {
            break;
        } else{
            printf(" %c\n",c);
           if(c =='i'){

               count++;

           }
        }

    }

    printf(" We found %c:  %d times",c , count);
    fclose(fptr);

    return 0;


}