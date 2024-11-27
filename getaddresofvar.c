#include<stdio.h>

int main(){
    int a = 1;
    int* k = &a;
    printf("The adress of a is %u",&a);
    printf("The value of a is :\n %d",&k);
    return 0;
}