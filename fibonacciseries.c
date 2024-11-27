#include<stdio.h>
int fibocacci (int );
int fibocacci (int n ){
    if (n==1||n==2){
        return n-1;
    }
    return fibocacci(n-1)+ fibocacci(n-2);
}   


int main(){
   int a;
   printf("Enter the number you desire :\n");
   scanf("%d",&a);
   printf("The fibocacci series of %d is %d\n", a , fibocacci(a));

    return 0;
}