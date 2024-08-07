#include <stdio.h>

int main() {
    int n, i, j, key;

    // Get the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Get the elements from the user
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion sort algorithm
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements that are greater than key to one position ahead
       while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // Print the sorted array
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
} 
