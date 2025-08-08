/*gcc randomno.c -o randomno
./randomno*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(0));
    int n=(rand()%100+1);
    int guess;
    printf("enter your guess: \n");
    scanf("%d",&guess);
    int score=0;
    while(n!=guess){
        if(guess>n){
            printf("try a lower no\n");
            score++;
        }
        else{
            printf("try a higher number\n");
            score++;
        }
        printf("enter your guess: \n");
        scanf("%d",&guess);
    }
    printf("YOU WON\n");
    printf("your score is %d",score);
    

}