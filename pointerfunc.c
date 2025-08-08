/*gcc pointerfunc.c -o pointerfunc
./pointerfunc*/
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*fptr)(int, int); // Declare pointer
    fptr = add; // Assign function address (no & needed, add == &add)

    printf("Sum = %d\n", fptr(5, 10)); // Call via pointer
    printf("Sum = %d\n", (*fptr)(20, 30)); // Alternate syntax

    return 0;
}
