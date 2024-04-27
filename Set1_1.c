#include <stdio.h>

int main() {
    int arr[6] = {1, 3, 5, 7, 8};  // Initialize the array with elements
    int n = 5;  // Number of elements in the array
    int i, index, newValue;


    printf("Original Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    index = 3; 
    newValue = 10;  


    for (i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = newValue;

    n++; 


    printf("Modified Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
