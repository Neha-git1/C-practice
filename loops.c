/*gcc loops.c -o loops
./loops*/
#include<stdio.h>
int main(){
    int i=10;
    while(i>=10 && i<=20){
        printf("the value of i is %d \n ",i);
        i++;
    }
    for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
/*| Feature            | `for` loop                           | `while` loop                        |
| ------------------ | ------------------------------------ | ----------------------------------- |
| Best for           | Fixed number of repetitions          | Unknown number of repetitions       |
| Syntax             | All loop control in one line         | Condition only; setup outside loop  |
| Readability        | Cleaner for counter-based iterations | More flexible for conditional logic |
| Initialization     | Inside `for` declaration             | Before the loop                     |
| Update (increment) | In `for` header                      | Inside loop body                    |
*/
}

