#include <stdio.h>

int main() {
    double operand1, operand2, result;
    char operator;
    
    // Get input from user
    printf("Enter first operand: ");
    scanf("%lf", &operand1);
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Note the space before %c to consume newline
    
    printf("Enter second operand: ");
    scanf("%lf", &operand2);
    
    // Perform operation using switch statement
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("%.2lf + %.2lf = %.2lf\n", operand1, operand2, result);
            break;
            
        case '-':
            result = operand1 - operand2;
            printf("%.2lf - %.2lf = %.2lf\n", operand1, operand2, result);
            break;
            
        case '*':
            result = operand1 * operand2;
            printf("%.2lf * %.2lf = %.2lf\n", operand1, operand2, result);
            break;
            
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("%.2lf / %.2lf = %.2lf\n", operand1, operand2, result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
            
        case '%':
            // Modulo operation works with integers
            if (operand2 != 0) {
                result = (int)operand1 % (int)operand2;
                printf("%.0lf %% %.0lf = %.0lf\n", operand1, operand2, result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator! Please use +, -, *, /, or %%\n");
            break;
    }
    
    return 0;
}
