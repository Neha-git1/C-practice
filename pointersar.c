/*gcc pointersar.c -o pointersar
./pointersar*/
#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *p=arr;
    printf("first val is %d\n",*p);
    p++;
    printf("2nd val is %d\n",*p);
    printf("diff is %d\n ",&arr[4] - &arr[0]);
}
//p + 1 moves to the next element of the type.

//Works with +, -, comparison (>, <), and subtraction between two pointers of the same array.