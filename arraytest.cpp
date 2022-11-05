//
// Created by National Cyber City on 9/4/2022.
// array
// for loop , while loop , do while loop
//

#include "stdio.h"

int main(){

    int myage=10;

    int arr[6]={10,20,30,40,50,60};

    int myarr[5]={10,20,30,40,50};

    char mychar[5] = {'a','b','c','d','e'};

    myarr[1]=100;
    myarr[4]=150;

    printf("our output is : %d\n",myarr[1]);
    printf("our output is : %d",myarr[4]);


    for(int a=0 ; a< 5 ; a++){

        printf(" arr data is : %d\n",myarr[a]);
    }

    return 0;
}