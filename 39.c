#include <stdio.h>

int main() {
    int n, digit, found = 0;
    long long product = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative integer.\n");
        return 0;
    }

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }

        n /= 10;
    }

    if (found)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
