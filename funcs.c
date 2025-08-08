/*gcc funcs.c -o funcs
./funcs*/
#include<stdio.h>
int sum(int a, int b){
    int c=a+b;
    return c;
}
int main(){
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    int c=sum(x,y);
    printf("%d",c);
}
