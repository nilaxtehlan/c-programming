#include<stdio.h>
void main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);
    if(age>19){
        printf("adult\n");
    }
    else{
        printf("not adult");
    }
}