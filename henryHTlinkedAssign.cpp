//
// Created by National Cyber City on 9/5/2022.
//

#include "stdio.h"
#include "stdlib.h"

void betweenData(struct Node* prV_Node, int age, int id);

void last(struct Node* prevone, int age, int id);
void AtFirstData(struct Node** head_ref, int age, int id);

struct Node{

    int id;
    int age;
    struct Node* next;
};

int main(){
    int ans;
    int bage=0, bid=0;

    struct Node* first=NULL;
    struct Node* second=NULL;
    struct Node* third= NULL;


    first=(struct Node*) malloc(sizeof (struct Node));
    second=(struct Node*) malloc(sizeof (struct Node));
    third=(struct Node*) malloc(sizeof (struct Node));

    first->age = 10;
    first->id = 101;
    first->next = second;
    printf("this is original first data[age]:\t%d years old.\n",first->age);
    printf("this is original first data[id]:\t%d\n\n",first->id);

    second->age = 20;
    second->id = 102;
    second->next = third;
    printf("this is original second data[age]:\t%dyears old\n",second->age);
    printf("this is original second data[id]:\t%d \n\n",second->id);

    third->age = 30;
    third->id = 103;
    third->next = NULL;
    printf("this is original third data[age]:\t%d years old.\n",third->age);
    printf("this is original third data[id]:\t%d\n\n",third->id);

    printf("\n\n>>>You have 3 data<<<\n\n");
    start:
    printf("If you want to add data\nTYPE[1]\n\nIf you do not want to add\nTYPE[0]\n-->Type here -->-->");
    scanf("%d",&ans);
    if(ans == 1){
        system("clear");
        printf("\n\nyou can add data and choose one below\n");
        printf("[1]\tPlace\tAt First\n[2]\tPlace\tBetween\n[3]\tPlace\tLatest\n");
        printf("enter your answer:");
        scanf("%d",&ans);
        switch (ans) {
            case 1:
                printf("Enter your data[age]: ");
                scanf("%d",&bage);
                printf("Enter your data[id]: ");
                scanf("%d",&bid);
                AtFirstData(&first, bage, bid);

                break;
            case 2:
                printf("\nYou can add data in between^^\n");
                printf("Choose where you want to add new data after:\n");
                printf("[1]After First\n[2]After Second\n\n");
                printf("Enter Your ans:: ");
                scanf("%d",&ans);
                if(ans == 1){
                    printf("Enter data[age] to store:");
                    scanf("%d",&bage);
                    printf("Enter data[id] to store: ");
                    scanf("%d",&bid);
                    betweenData(first, bage, bid);
                }else if(ans == 2){
                    printf("Enter your data[age] to store:");
                    scanf("%d",&bage);
                    printf("Enter data[id] to store:");
                    scanf("%d",&bid);
                    betweenData(second, bage, bid);
                }


                break;
            case 3:
                printf("enter your data[age]");
                scanf("%d",&bage);
                printf("Enter your data[id]:");
                scanf("%d",&bid);
                last(third, bage, bid);
                break;
            default:
                printf("\n\n\nThis is number that you choice[%d]",ans);
                printf("\n####>>Wrong choice and leaving from the program!<<####\n\n\n");
                return 0;
        }

    } else{
        printf("\nThanks for using my program\nLeaving from program\n");
        return 0;
    }

    struct Node* temp = first;
    printf("\n\nYor Edited Data Are:\n");
    while( temp != NULL){

        printf("The age is :\t\t%d years old.\n",temp->age);
        printf("The id  is :\t\t%d.\n\n",temp->id);
        temp = temp->next;

    }goto start;

    return 0;
}

//To add data between first and second or second and third
void betweenData(struct Node* prV_Node, int age, int id){
    int betAns;

    if( prV_Node == NULL){
        return;
    }
    struct Node* newNode = (struct Node*) malloc(sizeof (struct Node));
    newNode->age = age;
    newNode->id= id;
    newNode->next = prV_Node->next;
    prV_Node->next =newNode;

}

//To add data the begins of list
void AtFirstData(struct Node** head_ref, int age, int id){
    struct Node* newNode = (struct Node*) malloc(sizeof (struct Node));
    newNode->age = age;
    newNode->id = id;
    newNode->next = (*head_ref);
    (*head_ref)=newNode;
}

//To add data the last of list
void last(struct Node* prevone, int age, int id){
    if( prevone == NULL){
        return;
    }
    struct Node* Newone = (struct Node*) malloc(sizeof (struct Node));
    Newone->age = age;
    Newone->id= id;
    prevone->next = Newone;
    Newone->next = NULL;

}