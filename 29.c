#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Enter a number from 0 to 20.\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %llu\n", fact);

    return 0;
}
