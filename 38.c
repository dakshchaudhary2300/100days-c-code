#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative integer.\n");
        return 0;
    }

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
