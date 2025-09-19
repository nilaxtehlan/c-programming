/*using logical operators
  1. and--> &&                        0 is false 
  2. or-->||                          1 is true
  3. not--> !(to change output of expression)*/
#include<stdio.h>
#include<math.h>
void main(){
    printf("%d\n",3>5||5>4);
    printf("%d\n",3>5&&5>4);
    printf("%d\n",!3>1);
    printf("%d",!((3>1)&&(5<4)));
}