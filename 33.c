#include <stdio.h>

int main() {
    int n, temp, digit, count = 0;
    long long sum = 0, power;
    int i;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not an Armstrong number\n");
        return 0;
    }

    temp = n;

    do {
        count++;
        temp /= 10;
    } while (temp > 0);

    temp = n;

    do {
        digit = temp % 10;
        power = 1;

        for (i = 0; i < count; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    } while (temp > 0);

    if (sum == n)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
