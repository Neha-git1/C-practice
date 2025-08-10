//A structure pointer is a pointer that stores the address of a structure variable.
//Using -> operator, we can access members of a structure through its pointer.

/*gcc structures.c -o structures
./structures*/
#include<stdio.h>
struct Student{
    char name[20];
    int age;
};
int main(){
    struct Student s1={"Neha",20};
    struct Student *ptr=&s1;
    printf("Name= %s\n",ptr->name);
    printf("Age= %d\n",ptr->age);
}



