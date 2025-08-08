/*gcc pointers.c -o pointers
./pointers*/
#include<stdio.h>
int main(){
    int i=10;
    int *j=&i;
    printf("address of i is %u\n ",&i);  //%u is positive integer
    printf("value of i is %d\n ",*j);
    printf("address of i is %u\n ",j);
    
}
//j is the pointer that points to the address of i