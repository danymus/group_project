#ifndef STRFUNC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRFUNC_H

void printStrArr(char*arr[],int arrLength);
void sortStrArr(char*arr[],int arrLength);
void reverseSortStrArr(char*arr[],int arrLength);
void freeStrArr(char*arr[],int arrLength);

#endif