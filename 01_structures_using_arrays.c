#include<stdio.h>
#include<string.h>

struct employe {
    int code;
    float salary;
    char name[100];  // Character array to hold the employee's name
};

int main() {
    struct employe facebook[1000];  // Array to store multiple employees

    // Initializing first employee
    facebook[0].code = 829;
    strcpy(facebook[0].name, "Manya hagrya an butya");  // Copying name into the array
    facebook[0].salary = 3894.0;  // Setting salary

    // Printing the first employee's details
    printf("%d %.2f %s\n", facebook[0].code, facebook[0].name, facebook[0].salary);
    printf("Helo bhai");

    return 0;
}
