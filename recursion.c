#include <stdio.h>

// Recursive factorial function
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
//Every recursive function must have a base case to stop infinite calls.
//Recursion is used in trees, graphs, backtracking.