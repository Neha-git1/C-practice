/*gcc pointerarray.c -o pointerarray
./pointerarray*/
#include<stdio.h>
int main(){
    //1d
    int arr[]={1,2,3,4,5};
    int (*p)[5]=&arr;
    for(int i=0;i<5;i++){ //seperate conditions in for brackets with semicolon
        printf("%d ",(*p)[i]);     


    }

    //2d
    


    int matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int (*p)[2] = matrix; // p points to a row (array of 2 ints)

    printf("%d %d\n", p[0][0], p[0][1]); // Row 0 → 1 2
    p++; // Jump to next row (skips 2 ints)
    printf("%d %d\n", p[0][0], p[0][1]); // Row 1 → 3 4

    return 0;




}
