#include<stdio.h>
 typedef struct employe {
    int code;
    float salary;
    char name[100];  // Character array to hold the employee's name
}Emp;

int main(){
    Emp e1;                   //    typedef struct employe e1;
    e1.code= 89;
    Emp *ptr ;
    ptr  = &e1;
    printf("%d",ptr ->code);
    return 0;
}