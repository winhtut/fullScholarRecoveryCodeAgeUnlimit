//
// Created by National Cyber City on 9/19/2022.
// Binary Serach Using Recursive

#include "stdio.h"

int binarySearchRecur(int data[] , int toSearch , int low , int high){

    if( high >= low ){

       int mid = low + ( high - low)/2;

       if( data[mid] == toSearch)
           return mid;

       if(data[mid] > toSearch)
           return binarySearchRecur(data, toSearch ,low , mid-1 );

       return binarySearchRecur(data, toSearch , mid+1 , high);
    }

    return -1;
}

int main(){

    int data[]={10,20,25,36,40,50,60};

    int size = sizeof (data) / sizeof (data[0]);

    int toSearch=10;

    int result = binarySearchRecur(data , toSearch , 0 , size-1);

    if(result == -1){

        printf(" Data not found: %d",toSearch);
    } else{

        printf(" Data found: %d",toSearch);

    }

    return 0;

}