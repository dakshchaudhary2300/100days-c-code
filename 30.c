#include <stdio.h>

int main() {
    int n, digit;
    long long reverse = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative integer.\n");
        return 0;
    }

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    printf("Reversed number = %lld\n", reverse);

    return 0;
}
