#include<stdio.h>

int main(){
    int n ;
    printf("Enter the number for its table:\n");
    scanf("%d",&n);
    for (int i = 1; i <=10 ; i++)
    {
        printf("%d Times %d is: %d\n",n,i,n*i);

    }
    

    return 0;
}