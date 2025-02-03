#include "strfunc.h"

void printStrArr(char*arr[],int arrLength)
{
    for(int i = 0;i<arrLength;i++)
    {
        printf("%s\n",arr[i]);
    }
}

void sortStrArr(char**arr,int arrLength)
{
    char*temp=malloc(100*sizeof(char));
    for (int i = 1; i <= arrLength; i++) 
    {
        for (int j = 0; j <= arrLength - i-1; j++) 
        {
            if (strcmp(arr[j], arr[j + 1]) > 0) 
            {
                strcpy(temp, arr[j]); 
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

void reverseSortStrArr(char*arr[],int arrLength)
{
    char*temp=malloc(100*sizeof(char));
    for (int i = 1; i <= arrLength; i++) 
    {
        for (int j = 0; j <= arrLength - i-1; j++) 
        {
            if (strcmp(arr[j], arr[j + 1]) < 0) 
            {
                strcpy(temp, arr[j]); 
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

void freeStrArr(char*arr[],int arrLength)
{
    for(int i = 0;i<arrLength;i++)
    {
        free(arr[i]);
    }
}