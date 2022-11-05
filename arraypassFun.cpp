//
// Created by National Cyber City on 9/5/2022.
//

#include "stdio.h"
void myPrint(int num[],int size);
int main(){

    float resutl;
    int data[]={20,1,2,3,100,105};
    int size = sizeof (data)/sizeof (data[0]);

    printf("Arr size %d \n",size);

    myPrint(data,size);

    return 0;

}

void myPrint(int num[] , int size){

    int arrsize = sizeof (num)/sizeof (num[0]);

    printf(" \n\n data arrsize  %d \n\n\n",arrsize);

    for(int i=0; i<size  ; i++){

        printf("data %d \n",num[i]);
    }



}