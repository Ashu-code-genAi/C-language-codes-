#include<stdio.h>
 typedef struct Vector
{
    int i ; 
    int j  ;
} vector ;


int main(){
    vector v = {1,2};
    printf("The value of vector is %di + %dj",v.i , v.j);
    return 0;
}