#include<stdio.h>
#include<math.h>
int fact(int n);
int main(){
printf("fact %d",fact(9));
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN=factNm1*n;
}