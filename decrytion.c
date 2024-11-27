#include<stdio.h>
#include <string.h>
int main(){
    char str[] = {"Nobzb!jt!cbumb!cvub!qbwub!ublmb!boe!opoftfotf!"};
    for (int i = 0; i < strlen(str) ; i++)
    {
        str[i]=str[i]-1;

    }
    printf("%s", str );
    return 0;
}