

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    do {
        // Display menu
        printf("Enter operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        // Check if the user wants to quit
        if (operator == 'q' || operator == 'Q') {
            break;
        }

        // Input two numbers
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        // Perform operation and display result
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            default:
                printf("Error: Invalid operator\n");
        }

    } while (1); // Infinite loop, will break on 'q' or 'Q'

    printf("Calculator has been closed.\n");

    return 0;
}
