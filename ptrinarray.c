#include<stdio.h>

int main(){
    int Arr [10];
    int* ptr = Arr;
    for (int  i = 0; i < 10; i++)
    {
        printf("Enter the number in array ");
        scanf("%d",&Arr[i]);
    }
    ptr = ptr +2;
    printf("The value of ptr +2 is %d\n:",*ptr);
    return 0;
}