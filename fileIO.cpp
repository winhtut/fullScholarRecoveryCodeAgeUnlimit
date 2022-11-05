//
// Created by National Cyber City on 9/5/2022.
//

#include "stdio.h"
#include "stdlib.h"

int main(){

    int number;
    FILE *fptr;

    fptr =fopen("filelesson.txt","a");


    if(fptr == NULL){

        printf("File cannot open!");
        exit(1);

    }

    printf("Enter some number:");
    scanf(" %d",&number);

    fprintf(fptr , "%d",number);

    fclose(fptr);

    return 0;



}