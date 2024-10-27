#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using logical AND
    if (num1 > 0 && num2 > 0) {
        printf("Both numbers are positive.\n");
    } else {
        printf("At least one number is not positive.\n");
    }

    // Using logical OR
    if (num1 < 0 || num2 < 0) {
        printf("At least one number is negative.\n");
    } else {
        printf("Both numbers are non-negative.\n");
    }

    // Using logical NOT
    if (!(num1 == 0)) {
        printf("The first number is not zero.\n");
    } else {
        printf("The first number is zero.\n");
    }

    return 0;
}
