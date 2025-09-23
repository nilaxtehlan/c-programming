#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("It is a lowercase letter.");
    }
    else{
        printf("It is not a lowercase letter.");
    }
    return 0;
}