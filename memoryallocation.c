/*gcc memoryallocation.c -o memoryallocation
./memoryallocation*/
#include<stdio.h>
#include <stdlib.h>  // Needed for malloc, calloc, realloc, free

int main() {
    int *arr;   // arr will store the address of our dynamic array
    int n = 5;  // initial size of array

    // -----------------------
    // 1. malloc
    // -----------------------
    // malloc(size_in_bytes) → allocates memory on the heap but DOES NOT initialize it.
    // We need to calculate: size = number_of_elements × size_of_each_element
    arr = (int*) malloc(n * sizeof(int));

    // Always check if malloc worked
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // exit program if malloc fails
    }

    // Initialize array values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // fill with 1, 2, 3, 4, 5
    }

    // Print array after malloc
    printf("After malloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // -----------------------
    // 2. realloc
    // -----------------------
    // realloc(pointer, new_size_in_bytes) → changes the size of an existing memory block
    // It keeps the existing data, and either expands in-place or moves to new memory if needed
    n = 8;  // we want a bigger array now
    arr = (int*) realloc(arr, n * sizeof(int));

    if (arr == NULL) {
        printf("Reallocation failed!\n");
        return 1;
    }

    // Fill the new slots with values
    for (int i = 5; i < n; i++) {
        arr[i] = i + 1;  // fill with 6, 7, 8
    }

    // Print array after realloc
    printf("\nAfter realloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // -----------------------
    // 3. free
    // -----------------------
    // free(pointer) → releases the allocated memory back to the system
    // Very important to prevent memory leaks
    free(arr);

    // Good habit: avoid dangling pointer
    arr = NULL;

    return 0;
}

