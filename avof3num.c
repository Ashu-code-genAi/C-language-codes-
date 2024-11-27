#include<stdio.h>
float avg (int a , int b , int c);
float avg (int a , int b , int c){
    return(a+b+c/3);
}

int main(){
    int a =3,b=4,c=5;
    printf("The avg value is :%.2f\n", avg(a,b,c));
    return 0;
}