#include <stdio.h>

int main() {
    float a, b;
    char OP;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    // Displaying arithmetic options
    printf("Choose an operator (+, -, *, /): ");
    scanf(" %c", &OP);

    // Performing the chosen operation
    switch (OP) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b!= 0) {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}
