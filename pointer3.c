#include<stdio.h>
int calcsquare(int n);
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("square is %d",calcsquare(n));
    return 0;
}
int calcsquare(int n)
{
return n*n;
}