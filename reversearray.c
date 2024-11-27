#include <stdio.h>

// Function to print the array
void printarray(int a[], int n) {
    for (int i = 0; i < n; i++) {  // print all elements in the array
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Function to reverse the array
void reverse(int arr[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        // Swap arr[i] with arr[n-i-1]
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int arr[] = {1, 4, 6, 7, 3};  // Array with 5 elements
    int n = 5;  // Length of the array

    printf("Original Array: ");
    printarray(arr, n);  // Print the original array
    
    reverse(arr, n);  // Reverse the array
    
    printf("Reversed Array: ");
    printarray(arr, n);  // Print the reversed array

    return 0;
}
