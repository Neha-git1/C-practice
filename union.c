#include <stdio.h>
#include <string.h>

// Define a union
union Data {
    int intValue;
    float floatValue;
    char str[20];
};

int main() {
    union Data data;

    data.intValue = 10;
    printf("intValue: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("floatValue: %.2f\n", data.floatValue);

    strcpy(data.str, "Hello");
    printf("str: %s\n", data.str);

    // Notice: old values are overwritten
    return 0;
}
//Structures = separate memory for each member.
//Unions = all members share the same memory, so only one value is valid at a time.
