#include <stdio.h>

int main() {
    int n, i, prime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 2)
        prime = 0;

    for (i = 2; prime && i <= n / i; i++) {
        if (n % i == 0)
            prime = 0;
    }

    if (prime)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}
