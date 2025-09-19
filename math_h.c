//use of modulo math.h
#include<stdio.h>
#include<math.h>
void main(){
    int a,b;
    printf("value of a is ");
    scanf("%d",&a);
    printf("value of b ");
    scanf("%d", &b);
    int power = pow(a,b);
    printf("power is %d", power);
    return 0;
}