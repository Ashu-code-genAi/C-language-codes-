#include<stdio.h>

int main(){
    int sum =0;
    int i = 0;
    do
    {
        sum+=i;
        i++;
     
    } while (i<=10);
    printf("The sum of first 10 natural number is %d",sum);
    return 0;
}