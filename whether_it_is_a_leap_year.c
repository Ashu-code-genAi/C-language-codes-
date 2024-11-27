#include<stdio.h>

int main(){
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    if (year==0)   
    {
        printf("Year can't be 0 -_-");
    }
    else if (year%4==0)
    {
        printf("YES,it is a Leap year   UWU !!!!!");
    }
    else{
        printf("It is not a leap year T_T");
    }

    return 0;
}