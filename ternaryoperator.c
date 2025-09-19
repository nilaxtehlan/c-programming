//? means true : means false age>=18 is condition
#include<stdio.h>
void main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);
    age>=18?printf("adult\n") : printf("not adult\n");
}