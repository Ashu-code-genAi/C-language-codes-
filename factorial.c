#include<stdio.h>
int factorial (int );
int factorial (int n){
    if (n==1||n==0)
    {
        return 1;
    }
   return factorial(n-1)*n;

}

int main(){
    int a ;
    printf("Enter the number whose factorial you want to find :");
    scanf("%d",&a);
    printf("Factorial of %d is %d \n", a , factorial(a));
    return 0;
}