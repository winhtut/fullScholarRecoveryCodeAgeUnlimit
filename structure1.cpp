//
// Created by National Cyber City on 9/6/2022.
//structure struct
//

#include "stdio.h"
#include "conio.h"
#include "string.h"

struct Human_data{

    char name[20];
    char fname[20];
    char hobby[20];
    int age=0;

};

int main(){
    struct Human_data Name1;
    struct Human_data Name2;

    strcpy(Name1.name , "WinHtut");
    strcpy(Name1.fname , "fffWinHtut");
    strcpy(Name1.hobby , "Research");
    Name1.age=111;

    strcpy(Name2.name , "Shin");
    strcpy(Name2.fname , "xxxxxxxx");
    strcpy(Name2.hobby , "@@@@@@@@@");
    Name2.age=101;


    printf("Human Data are :%s\n",Name2);


    return 0;

}