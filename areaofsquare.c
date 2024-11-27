#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter the lenght of side :\n");
    scanf("%d",&a);
    printf("The area of square is %.2f\n",pow(a,2));  // we use %.2f so that the float value can be rounded off till 2 decimal units
    return 0;
}