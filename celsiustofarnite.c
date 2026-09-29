#include<stdio.h>
float convertTemp(float celcius);
int main(){
float far=convertTemp(33);
printf("faranite is :%.2f",far);
}
float convertTemp(float celsius){
    float far = celsius *(9.0/5.0)+32;
    return far;
}