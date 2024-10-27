#include <stdio.h>

int main() {
    int num1, num2, min;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    
    min = (num1 < num2) ? num1 : num2;

    
    printf("The minimum number is: %d\n", min);

    return 0;
}
