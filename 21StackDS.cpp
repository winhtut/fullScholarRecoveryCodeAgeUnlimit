//
// Created by National Cyber City on 9/19/2022.

// stack DS
//

#include "stdio.h"
#include "stdlib.h"
#define ARRSIZE 10

int count = 0;
struct stack{
    int array[ARRSIZE];
    int top;
};
typedef struct stack winhtut;

void createEmptyStack(winhtut *stackMemory){

    stackMemory->top = -1 ;

}

void display(winhtut *s){

    printf("\nAll data from our StackMemory: \n");

    for(int i=0; i<count ; i++){

        printf(" %d :",s->array[i]);
    }
}
int full(winhtut *s){
    if(s->top == ARRSIZE-1)
        return 1;
    else
        return 0;

}

int empty(winhtut *s){

    if( s->top == -1){
        return 1;
    }
    return 0;

}
void push(winhtut *s , int data){
    if(full(s)){
        printf("Our StackMemory is full!");
    } else{
        s->top++;
        s->array[s->top] = data;
        printf("\n %d:Data Pushed at %d ",data , s->top);

    }
    count++;
    display(s);
}

void pop(winhtut *s){
    if(empty(s)){
        printf("Stack Empty!");

    } else{

        printf("\n Popped data = %d ", s->array[s->top]);
        s->top--;


    }
    count--;
    display(s);
    printf("\n");

}

int main(){

    winhtut *stackMemory=(winhtut *)malloc(sizeof(winhtut));
    createEmptyStack(stackMemory);

    push(stackMemory , 101);
    push(stackMemory , 102);
    push(stackMemory , 103);
    push(stackMemory , 104);
    push(stackMemory , 105);

    pop(stackMemory);
    pop(stackMemory);

    push(stackMemory , 106);
    push(stackMemory , 107);
    push(stackMemory , 108);


    return 0;


}

