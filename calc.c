#include <stdio.h>
#include <math.h>   // Required for mathematical functions

int main() {
    char operator;
    double num1, num2, result;

    // Display menu
    printf("Scientific Calculator\n");
    printf("Select an operation:\n");
    printf(" + : Addition\n - : Subtraction\n * : Multiplication\n / : Division\n");
    printf(" ^ : Exponentiation\n s : Square root\n");
    printf(" t : Tangent\n c : Cosine\n n : Sine\n l : Logarithm\n");
    printf("Select an operation: ");
    scanf(" %c", &operator);  // Note the space before %c to capture user input

    // Operations that need two numbers
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '^') {
        printf("Enter two numbers separated by space: ");
        scanf("%lf %lf", &num1, &num2);
    }
    // Operations that need one number
    else if (operator == 's' || operator == 't' || operator == 'c' || operator == 'n' || operator == 'l') {
        printf("Enter a number: ");
        scanf("%lf", &num1);
    }

    // Perform the operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case '^':
            result = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 's':
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Square root of %.2lf = %.2lf\n", num1, result);
            } else {
                printf("Error! Cannot compute square root of a negative number.\n");
            }
            break;
        case 't':
            result = tan(num1);
            printf("Tangent of %.2lf = %.2lf\n", num1, result);
            break;
        case 'c':
            result = cos(num1);
            printf("Cosine of %.2lf = %.2lf\n", num1, result);
            break;
        case 'n':
            result = sin(num1);
            printf("Sine of %.2lf = %.2lf\n", num1, result);
            break;
        case 'l':
            if (num1 > 0) {
                result = log(num1);
                printf("Natural logarithm of %.2lf = %.2lf\n", num1, result);
            } else {
                printf("Error! Logarithm undefined for non-positive numbers.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}
