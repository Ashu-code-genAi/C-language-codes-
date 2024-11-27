#include<stdio.h>
struct employe {
    int code;
    float salary;
    char name[100];  // Character array to hold the employee's name
};

int main(){
    struct employe e1;
    e1.code= 89;
    struct employe *ptr ;
    ptr  = &e1;
    printf("%d",ptr ->code);
    return 0;
}