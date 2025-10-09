#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("\nMethod 1 - Using loop:\n");
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of all numbers from 1 to %d = %d\n", n, sum);
    
    return 0;
}
