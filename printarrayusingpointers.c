#include<stdio.h>

int main(){
    int marks []= { 10, 20,60,40};
    int* ptr= &marks[0];
    for (int  i = 0; i < 4 ; i++)
    {
        printf("The value at %d is %d\n",i ,*ptr);
        ptr++;
    }
    

    return 0;
}