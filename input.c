/*gcc input.c -o input
./input*/

#include<stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter 1st number\n " );
    scanf("%d",&num1);
    printf("Enter 2nd number\n " );
    scanf("%d",&num2);
    printf("Sum is: %d",num1+num2);
}