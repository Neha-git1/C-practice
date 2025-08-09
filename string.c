/*gcc string.c -o string
./string*/
#include<stdio.h>
#include<string.h>
int main(){
    //strlen
    char str[]="Neha";  //use double quotes for string
    printf("the length of the string is: %u\n",strlen(str));
    //strcpy
    char src[]="neha";
    char dest[20];   //dest[20] means we have 20 bytes available
    strcpy(dest,src);
    printf("%s\n", dest);
    //strcmp
    char a[] = "apple";
    char b[] = "banana";

    int result = strcmp(a, b);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("a comes before b\n");
    else
        printf("a comes after b\n");
    
}
//'\0' is a special character with ASCII value 0.

//Marks end of string in memory.

//Any function working on strings in C depends on it to avoid reading into garbage memory.



