#include <stdio.h>

int main() {
    int number, i;
    double factorial = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        return 1;
    }
    
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }
    
    printf("Factorial of %d = %.2lf\n", number, factorial);
    
    return 0;
}