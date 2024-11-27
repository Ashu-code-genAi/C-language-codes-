#include<stdio.h>
float convert (int a );
float convert (int a ){
    return((1.8*a)+32);
}

int main(){
    int a ;
    printf("Enter celcius :");
    scanf("%d",&a);
    printf("%d  Celsius  is %.2f Fahrenheit ", a , convert(a));

    return 0;
}