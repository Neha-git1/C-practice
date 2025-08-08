/*gcc conditions.c -o conditions
./conditions*/
#include<stdio.h>
int main(){
    int age;
    printf("enter your age : \n");
    scanf("%d",&age);
    if(age>18 && age<65){
        printf("you can drive\n");
    }
    else if (age>65){
        printf("you can drive and you are a senior citizen\n");
    }
    else{
        printf("you cannot drive");
    }
    

}