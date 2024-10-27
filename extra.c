#include <stdio.h>

int main() {
    int age;
    char citizenship;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen of the country? (y/n): ");
    scanf(" %c", &citizenship);

    
    if (age >= 18 && citizenship == 'y') {
        printf("You are eligible to vote.\n");
    } else if (age < 18 && citizenship == 'y') {
        printf("You are not eligible to vote because you are under 18.\n");
    } else if (age >= 18 && citizenship != 'y') {
        printf("You are not eligible to vote because you are not a citizen.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
