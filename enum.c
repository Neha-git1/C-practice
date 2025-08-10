/*gcc enum.c -o enum
./enum*/
#include <stdio.h>

enum Menu {
    ADD = 1,
    EDIT,
    DELETE,
    EXIT
};

int main() {
    enum Menu choice = ADD;

    switch (choice) {
        case ADD:
            printf("Adding item...\n");
            break;
        case EDIT:
            printf("Editing item...\n");
            break;
        case DELETE:
            printf("Deleting item...\n");
            break;
        case EXIT:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
