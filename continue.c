/*gcc continue.c -o continue
./continue*/
#include<stdio.h>
int main(){
     int i;

    printf("Demonstrating 'continue' in a loop:\n");

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Skipping number %d using continue.\n", i);
            continue;  // Skip the rest of this iteration
        }
        printf("Number: %d\n", i);
    }

    printf("Loop finished.\n");
    return 0;

}
