//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result: %d + %d = %d", a, b, a + b);
            break;

        case '-':
            printf("Result: %d - %d = %d", a, b, a - b);
            break;

        case '*':
            printf("Result: %d * %d = %d", a, b, a * b);
            break;

        case '/':
            if (b == 0) {
                printf("Division by zero is not allowed");
            } else {
                printf("Result: %d / %d = %d", a, b, a / b);
            }
            break;

        case '%':
            if (b == 0) {
                printf("Division by zero is not allowed");
            } else {
                printf("Result: %d %% %d = %d", a, b, a % b);
            }
            break;

        default:
            printf("Invalid operator entered");
    }

    return 0;
}