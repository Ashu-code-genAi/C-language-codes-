#include<stdio.h>

int main(){
    int  a = 7;
    int* j = &a; 
    int ** k =&j;
    printf("The adress of the int value is %u \n",&a);
    printf("The value of j at addres %d \n",*(&a));
    printf("The value of j at addres %d \n",*(&k));
    return 0;
}