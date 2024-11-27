#include<stdio.h>

int main(){
    int a,b,c ;
    printf("Enter the marks of subject1 : \n");
    scanf("%d",&a);   
    printf("Enter the marks of subject2 :\n"); 
    scanf("%d",&b);
    printf("Enter the marks of subject3 :\n"); 
    scanf("%d",&c);
    if (a<33||b<33||c<33)
    {
        printf("You failed due to your indivisual marks are less than 33");
    }
    else if ((a+b+c)/3*100<40)
    {
        printf("You failed due to your total percentage is less than 40");
    }
    else{
        printf("You Have PASSED!!!!! ");
    }
    

    return 0;
}       