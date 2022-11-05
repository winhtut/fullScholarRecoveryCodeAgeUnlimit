//
// Created by National Cyber City on 9/12/2022.
//

#include <stdio.h>

int main(){

    char* materials[ ] = {  "iron",  "copper",  "gold"};

    int i,j ;

    char str[10] ;

    for (i = 0; i < 3; i++) {

        printf("%s : ", materials[ i ]);

        printf("mem address :%p\n\n", materials[i] );

    }



//printf("Size of array : %d\n",sizeof(materials));

    printf("Enter char or string : ") ;

    gets(str) ;

    materials[2] = str;

    for (j=0 ; j < 3 ; j++){

        printf("\n%s : ", materials[ j ]);

        printf("mem address :%p\n", materials[j] );
    }

    int size = sizeof(materials) ;

    printf("Size of materials array : %d",size);

    return 0;

}
