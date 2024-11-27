#include<stdio.h>
 typedef struct complex
{
    int real ; 
    int imaginary ;
} complex ;

void display (complex c ){
    printf("The value of complex number is %d + %di\n",c.real , c.imaginary);
}


int main(){
    complex charr [5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part ");
        scanf("%d",&charr[i].real);
        printf("Enter the imaginary part ");
        scanf("%d",&charr[i].imaginary);
        display(charr[i]);
    }
    
    return 0;
}