#include<stdio.h>
#include <string.h>
int main(){
    char str[] = {"Mnaya is batla buta pavta takla and nonesense "};
    for (int i = 0; i < strlen(str) ; i++)
    {
        str[i]=str[i]+1;

    }
    printf("%s", str );
    return 0;
}