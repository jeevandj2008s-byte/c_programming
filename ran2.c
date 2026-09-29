#include<stdio.h>
void square(int n);
void square_pointer(int*n) ;
int main(){
    int number=4;
    square(number);
    printf("n is %d\n",number);
    square_pointer(&number);
    printf("n is :%d\n",number);
return 0;
}
void square(int n){
n=n*n;
printf("square is%d\n",n);
}
void square_pointer(int*n)
{
    *n=*n* *n;
    printf("square is:%d\n",*n);
}