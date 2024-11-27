#include<stdio.h>

int main(){
    float income ;
    printf("Enter Income :\n");
    scanf ("%f",&income);
    if (income<=250000)
    {
        printf("The amount of tax you have to pay is :0\n");
    }
    else if (income>250000 && income<=500000)
    {
        printf("The amount of tax you have to pay is : %f\n",income*0.05);
    }
    else if (income>500000 && income<=1000000)
    {
        printf("The amount of tax you have to pay is: %f\n", income*0.2);
    }
    else if (income>1000000)
    {
        printf("The amount of tax you have to pay is: %f\n", income*0.3);
    }
    else{
        printf("you dont have to pay tax as your income is less than 2.5 lakh");
    }
    
    return 0;
}