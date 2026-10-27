#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative number.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %lld\n", sum);

    return 0;
}
