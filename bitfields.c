//A way to store data in a structure using specific number of bits instead of full bytes
//Useful for memory optimization.
/*gcc bitfields.c -o bitfields
./bitfields*/
#include<stdio.h>
#include <stdio.h>

struct Flags {
    unsigned int a : 1; // 1 bit
    unsigned int b : 3; // 3 bits
    unsigned int c : 4; // 4 bits
};

int main() {
    struct Flags f = {1, 5, 10};

    printf("a=%u, b=%u, c=%u\n", f.a, f.b, f.c);
    printf("Size of struct = %zu bytes\n", sizeof(f));

    return 0;
}
