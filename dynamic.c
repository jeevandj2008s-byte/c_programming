#include<stdio.h>
int *arr=malloc(3*sizeof(int));
arr[0]=10;
arr[1]=20;
arr[2]=30;
free(arr);
pritnf("%d",arr[0]);