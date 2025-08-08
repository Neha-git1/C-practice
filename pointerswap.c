/*gcc pointerswap.c -o pointerswap
./pointerswap*/
#include<stdio.h>
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;}
int main(){
    int a=6;
    int b=9;
    swap(&a,&b);
    printf("%d",a);
    printf("%d",b);

    
}