/*You can pass a structure to a function:
By value → makes a copy (changes inside the function don’t affect the original)
By reference (pointer) → passes address (changes inside affect the original)*/
/*gcc structfunc.c -o structfunc
./structfunc*/
#include<stdio.h>
struct ptr{
    int x;
    int y;
};
void display(struct ptr p){
    printf("x=%d\n and y=%d\n",p.x,p.y);
};
int main(){
    struct ptr p1={10,20};
    display(p1);
}