#include<stdio.h>
void swap(int *a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
    int x=3;
    int y=8;
    printf("before x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("after x=%d,y=%d\n",x,y);
    return 0;

}