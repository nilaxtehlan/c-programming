#include<stdio.h>
void main(){
    char marks;
    printf("marks: ");
    scanf("%d", &marks);

   // if(marks>30){
   //     printf("pass");
   // }
   // else{
   //     printf("fail");
   // }

   //marks<=30?printf("fail"):printf("pass");

   if(marks<30){
    printf("C\n");
   }
   else if(marks>=30 && marks<70){
    printf("B");
   }
   else if(marks>=70 && marks<90){
    printf("A");
   }
   else{
    printf("A+");
   }

}