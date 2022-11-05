//
// Created by National Cyber City on 9/5/2022.
//

#include<stdio.h>
#include<stdlib.h>


struct info{
    int roll_no;
    int myan;
    int eng;
    int maths;
    int chem;
    int phys;
    int bio;
    struct info* next;
};

void beginning(struct info** head_ref , int roll, int myan, int eng, int maths, int chem, int phys, int bio ){


    struct info* newInfo = (struct info*) malloc(sizeof (struct info));

    newInfo->roll_no = roll;
    newInfo->myan= myan;
    newInfo->eng= eng;
    newInfo->maths= maths;
    newInfo->chem= chem;
    newInfo->phys= phys;
    newInfo->bio= bio;
    newInfo->next = (*head_ref);

    (*head_ref)=newInfo;


}

void after(struct info* prev_info , int roll, int myan, int eng, int maths, int chem, int phys, int bio){

    if( prev_info == NULL){
        return;
    }
    struct info* newinfo = (struct info*) malloc(sizeof (struct info));

    newinfo->roll_no = roll;
    newinfo->myan= myan;
    newinfo->eng= eng;
    newinfo->maths= maths;
    newinfo->chem= chem;
    newinfo->phys= phys;
    newinfo->bio= bio;
    newinfo->next =prev_info->next;
    prev_info->next =newinfo;

}

void end(struct info** head_ref,int roll, int myan, int eng, int maths, int chem, int phys, int bio){

    struct info* newinfo = (struct info*) malloc(sizeof (struct info));

    newinfo->roll_no = roll;
    newinfo->myan= myan;
    newinfo->eng= eng;
    newinfo->maths= maths;
    newinfo->chem= chem;
    newinfo->phys= phys;
    newinfo->bio= bio;
    newinfo->next=NULL;

    struct info *lastinfo=*head_ref;
    while(lastinfo->next != NULL)
    {
        lastinfo = lastinfo->next;
    }

    lastinfo->next = newinfo;

}


int main(){

    struct info* first=NULL;
    struct info* second=NULL;

    first=(struct info*) malloc(sizeof (struct info));
    second=(struct info*) malloc(sizeof (struct info));

    first->roll_no=1;
    first->myan=86;
    first->eng=94;
    first->maths=100;
    first->chem=84;
    first->phys=88;
    first->bio=90;

    first->next=second;

    second->roll_no=2;
    second->myan=78;
    second->eng=90;
    second->maths=96;
    second->chem=80;
    second->phys=84;
    second->bio=86;

    second->next=NULL;


    int choice;
    int roll;
    int myan;
    int eng;
    int maths;
    int chem;
    int phys;
    int bio;
    int af;


    printf("Please choose.\n");
    printf("1.To insert at the beginning of the linked list.\n2.To insert after a node.\n3.To insert at the end of the linked list.\n");
    scanf("%d",&choice);

    if(choice<1  || choice>3){
        printf("Invalid Input!");
    }


    else   if (choice==1)
    {

        system("cls");
        printf("Please enter the require data.\nRoll no. :");
        scanf("%d", &roll);
        fflush(stdin);
        printf("\nMyanmar marks :");
        scanf("%d", &myan);
        fflush(stdin);
        printf("\nEnglish marks :");
        scanf("%d", &eng);
        fflush(stdin);
        printf("\nMathematics marks :");
        scanf("%d", &maths);
        fflush(stdin);
        printf("\nChemistry marks :");
        scanf("%d", &chem);
        fflush(stdin);
        printf("\nPhysics marks :");
        scanf("%d", &phys);
        fflush(stdin);
        printf("\nBiology marks :");
        scanf("%d", &bio);



        beginning(&first,roll,myan,eng,maths,chem,phys,bio);

        struct info* temp = first;

        while( temp != NULL){

            printf(" Roll no. : %d \n ",temp->roll_no);
            printf(" Myanmar marks : %d \n ",temp->myan);
            printf(" English marks : %d \n ",temp->eng);
            printf(" Mathematics marks : %d \n ",temp->maths);
            printf(" Chemistry marks : %d \n ",temp->chem);
            printf(" Physics marks : %d \n ",temp->phys);
            printf(" Biology marks : %d \n \n",temp->bio);
            temp = temp->next;

        }



    }

    else if (choice==2){

        system("cls");
        printf("Please enter the require data.\nThe node in front of your new node(e.g. 1,2...) : ");
        scanf("%d",&af);
        fflush(stdin);
        printf("\nRoll no. : ");
        scanf("%d", &roll);
        fflush(stdin);
        printf("\nMyanmar marks : ");
        scanf("%d", &myan);
        fflush(stdin);
        printf("\nEnglish marks : ");
        scanf("%d", &eng);
        fflush(stdin);
        printf("\nMathematics marks : ");
        scanf("%d", &maths);
        fflush(stdin);
        printf("\nChemistry marks : ");
        scanf("%d", &chem);
        fflush(stdin);
        printf("\nPhysics marks : ");
        scanf("%d", &phys);
        fflush(stdin);
        printf("\nBiology marks : ");
        scanf("%d", &bio);


        if(af<1  || af>2){
            printf("Invalid Input!");
        }
        else if (af==1){

            after(first,roll,myan,eng,maths,chem,phys,bio);
        }

        else if (af==2){
            after(second,roll,myan,eng,maths,chem,phys,bio);
        }

        struct info* temp = first;

        while( temp != NULL){

            printf(" Roll no. : %d \n ",temp->roll_no);
            printf(" Myanmar marks : %d \n ",temp->myan);
            printf(" English marks : %d \n ",temp->eng);
            printf(" Mathematics marks : %d \n ",temp->maths);
            printf(" Chemistry marks : %d \n ",temp->chem);
            printf(" Physics marks : %d \n ",temp->phys);
            printf(" Biology marks : %d \n \n",temp->bio);
            temp = temp->next;

        }

    }


    else if(choice==3){
        system("cls");
        printf("Please enter the require data.");
        printf("\nRoll no. : ");
        scanf("%d", &roll);
        fflush(stdin);
        printf("\nMyanmar marks : ");
        scanf("%d", &myan);
        fflush(stdin);
        printf("\nEnglish marks : ");
        scanf("%d", &eng);
        fflush(stdin);
        printf("\nMathematics marks : ");
        scanf("%d", &maths);
        fflush(stdin);
        printf("\nChemistry marks : ");
        scanf("%d", &chem);
        fflush(stdin);
        printf("\nPhysics marks : ");
        scanf("%d", &phys);
        fflush(stdin);
        printf("\nBiology marks : ");
        scanf("%d", &bio);

        end(&first,roll,myan,eng,maths,chem,phys,bio);

        struct info* temp = first;

        while( temp != NULL){

            printf(" Roll no. : %d \n ",temp->roll_no);
            printf(" Myanmar marks : %d \n ",temp->myan);
            printf(" English marks : %d \n ",temp->eng);
            printf(" Mathematics marks : %d \n ",temp->maths);
            printf(" Chemistry marks : %d \n ",temp->chem);
            printf(" Physics marks : %d \n ",temp->phys);
            printf(" Biology marks : %d \n \n",temp->bio);
            temp = temp->next;

        }

    }







}