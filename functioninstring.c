#include<stdio.h>
#include <string.h>
int main(){
    char st [45]={"Manya"};
    char st1[45]= {" Chanya hagra buta ahe "};
    // char target [80];
    // strcpy(target,st);
    // printf("%s %s",st , target);
    // strcat(st , st1);
    // printf("%s ", st);
     int a = strcmp( "Manya","agrya"); // VVIMP  here it checks its ascii value if first value is less than scond then output is neg and if more then out put is positive and same then the output is zero
    printf("%d",a);

    return 0;
}