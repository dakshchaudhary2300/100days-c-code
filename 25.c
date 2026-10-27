#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Enter expression (e.g. 10 + 5): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;
        case '-':
            printf("Result = %.2f\n", a - b);
            break;
        case '*':
            printf("Result = %.2f\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Cannot divide by zero.\n");
            break;
        case '%':
            if (b == 0)
                printf("Cannot divide by zero.\n");
            else
                printf("Remainder = %d\n", (int)a % (int)b);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
