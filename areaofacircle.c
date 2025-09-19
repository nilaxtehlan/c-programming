//area of a circle is (pi)r*r
#include<stdio.h>
void main(){
    int radius;

    printf("enter radius: ");
    scanf("%d",&radius);

    float area=3.14*radius*radius;
    printf("area of the circle is %d", area);

    return 0;
}