#include<stdio.h>

int main(){
    char ch;
    printf("Enter a single character:\n");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
     printf("This character is lowercase");
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("This Chracter is Uppercase");
    }
    
    else{
        printf("This character is nether lowercase netheir highercase ");
    }
    return 0;
}