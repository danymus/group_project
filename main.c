 /* Course: COMP 2103, 2024
 Makeup assignment for those students who missed one of the coding tests
 Author: Danylo Samoshkin 
 Student ID: 030389s 
 email address: danimus@samoshk.in 
 Date: 2024-4-4
 I certify that this code is my own. I have not broken any rules concerning Academic Dishonesty.*/
#define MAXSIZE 5
#include <stdio.h>
#include <stdlib.h>
#include "strfunc.h"

int main(int argc, char *argv[]) 
{
    char*arr[MAXSIZE];
    printf("Enter %d words: \n",MAXSIZE);
    for(int i=0;i<MAXSIZE;i++)
    {
       arr[i]=malloc(100*sizeof(char));
       scanf("%s",arr[i]);
    }
    sortStrArr(arr, MAXSIZE);

    printStrArr(arr,MAXSIZE);

    reverseSortStrArr(arr, MAXSIZE);

    printf("reverse\n");

    printStrArr(arr,MAXSIZE);

    
}