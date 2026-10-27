#include <stdio.h>

int main() {
    long long n, temp, power = 1;
    long long first, last, middle, result;

    printf("Enter a non-negative integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Enter a non-negative integer.\n");
        return 0;
    }

    if (n < 10) {
        printf("Result = %lld\n", n);
        return 0;
    }

    temp = n;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;
    last = n % 10;
    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("After swapping = %lld\n", result);

    return 0;
}
