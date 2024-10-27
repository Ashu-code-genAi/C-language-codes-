#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Both numbers are equal.\n");
    }
    if (num1 != num2) {
        printf("The numbers are not equal.\n");
    }
    if (num1 > num2) {
        printf("%d is greater than %d.\n", num1, num2);
    }
    if (num1 < num2) {
        printf("%d is less than %d.\n", num1, num2);
    }
    if (num1 >= num2) {
        printf("%d is greater than or equal to %d.\n", num1, num2);
    }
    if (num1 <= num2) {
        printf("%d is less than or equal to %d.\n", num1, num2);
    }

    return 0;
}

