#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    do {
        printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        if (operator == 'q') {
            break;  // Exit the loop if 'q' is entered
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    continue;  // Skip the rest of the loop and restart
                }
                break;
            default:
                printf("Invalid operator. Please enter +, -, *, /, or 'q' to quit.\n");
                continue;  // Skip the rest of the loop and restart
        }

        printf("Result: %.2f\n", result);

    } while (1);

    printf("Calculator program terminated.\n");

    return 0;
}
