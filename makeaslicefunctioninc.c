#include<stdio.h>
char* slice(char str  [],int m , int n ){
    char* ptr = &str[m];
    char * ptr1= &str[n];
    str = ptr;
    str[n]= '\0';
    return str ;
}


int main(){
    char str []={"Manya chanya "};
    printf("%s",slice(str , 1, 5));
    return 0;
}