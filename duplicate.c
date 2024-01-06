


#include <stdio.h>

int main() {
    // Declare and initialize the original array
    int originalArray[] = {1, 2, 3, 4, 5};
    int originalSize = sizeof(originalArray) / sizeof(originalArray[0]);

    // Declare a new array to store the duplicate
    int duplicateArray[originalSize];

    // Duplicate the array elements
    for (int i = 0; i < originalSize; i++) {
        duplicateArray[i] = originalArray[i];
    }

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < originalSize; i++) {
        printf("%d ", originalArray[i]);
    }

    // Display the duplicated array
    printf("\nDuplicate Array: ");
    for (int i = 0; i < originalSize; i++) {
        printf("%d ", duplicateArray[i]);
    }

    return 0;
}

