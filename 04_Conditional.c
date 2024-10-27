#include <stdio.h>

int main() {
    int number;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    const char* result = (number % 2 == 0) ? "Even" : "Odd";

   
    printf("The number is: %s\n", result);

    return 0;
}
