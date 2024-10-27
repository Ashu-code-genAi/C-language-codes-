#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Bitwise AND
    printf("Bitwise AND (num1 & num2): %d\n", num1 & num2);

    // Bitwise OR
    printf("Bitwise OR (num1 | num2): %d\n", num1 | num2);

    // Bitwise XOR
    printf("Bitwise XOR (num1 ^ num2): %d\n", num1 ^ num2);

    // Bitwise NOT
    printf("Bitwise NOT (~num1): %d\n", ~num1);
    printf("Bitwise NOT (~num2): %d\n", ~num2);

    // Left Shift
    printf("Left Shift (num1 << 1): %d\n", num1 << 1);
    printf("Left Shift (num2 << 1): %d\n", num2 << 1);

    // Right Shift
    printf("Right Shift (num1 >> 1): %d\n", num1 >> 1);
    printf("Right Shift (num2 >> 1): %d\n", num2 >> 1);

    return 0;
}
