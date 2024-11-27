#include <stdio.h>

// Define the Vector structure
typedef struct Vector {
    int i; 
    int j;
} vector;

// Function prototype
vector sumvector(vector v1, vector v2);

int main() {
    vector v1 = {1, 2};
    vector v2 = {4, 7};

    // Call the sumvector function and store the result
    vector v3 = sumvector(v1, v2);

    // Output the result
    printf("The addition of 2 vectors is: %di + %dj\n", v3.i, v3.j);

    return 0;
}

// Function definition
vector sumvector(vector v1, vector v2) {
    vector v3;
    v3.i = v1.i + v2.i;
    v3.j = v1.j + v2.j;
    return v3;
}
