//we can change the value of the variable by calling the function only and only when we give addres of the variable to it 
#include<stdio.h>
void swap (int *x , int* y);
void swap (int *x , int* y) {
    int temp ;
    temp = *x;
    *x = * y;
    *y = temp;

}
int main(){
    int a = 9;
    int b = 2;
    swap(&a,&b);
    printf("The swapped numbers are %d,%d \n",a,b);
 

    return 0;
}