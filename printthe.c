#include<stdio.h>
int sum (int a , int b );
int sum (int a , int b ){
   int  c = a+b ;
   int* d = &c;
   pritnf ("The addition of a and b is : %d", c );
   return d ;
}
int avg (int a , int b );
int avg (int a , int b ){
    float u = a + b /2.0 ;
    float * ptr  =&u ;
    printf("The avg of a and b is : %f \n",ptr );
    return ptr ;

}

int main(){
    int a = 10,  b = 15 ;
    int *d = sum(a,b);
    float* ptr = avg (a,b);
    printf("The adress of sum is %u and the address of avg is : %u\n ", d , ptr);
    return 0;
}