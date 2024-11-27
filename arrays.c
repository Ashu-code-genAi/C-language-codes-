#include <stdio.h>

int main() {
    int arr[] = {10};
    int *ptr = arr;  // pointer to the first element of arr

    // Print the original value the pointer is pointing to
    printf("Value at ptr: %d\n", *ptr);  // Should print 10
    printf("Value at ptr: %u\n", *ptr);

    // Add 2 to the pointer, which moves it to the 3rd element (index 2)
    ptr = ptr + 1;

    // Print the new value the pointer is pointing to
    printf("Value at ptr + 2: %d\n", *ptr);  // Should print 30

    // Print the new pointer's memory address
    printf("Address of ptr + 2: %p\n", (void *)ptr);

    return 0;
}
