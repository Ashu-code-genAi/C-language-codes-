#include<stdio.h>
#include <string.h>
int main(){
    char str[] = {"Nobzb!jt!cbumb!cvub!qbwub!ublmb!boe!opoftfotf!"};
    char c = 'z' ;
    int contains = 0 ;

    for (int i = 0; i < strlen(str) ; i++)
    {
       if (str[i]== c)
       {
        contains = 1;
        break;
       }
    }
    if (contains)
    {
        printf("Yes it contains \n");
    }
    else{
        printf("It doesnot contain ");

    } 
   
    return 0;
}