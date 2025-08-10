#include <stdio.h>

int main() {
    FILE *fptr;

    // Write to file
    fptr = fopen("data.txt", "w");
    fprintf(fptr, "Hello File!\n");
    fclose(fptr);

    // Read from file
    char buffer[50];
    fptr = fopen("data.txt", "r");
    fgets(buffer, 50, fptr);
    printf("File content: %s", buffer);
    fclose(fptr);

    return 0;
}
