#include <stdio.h>

int main() {
    int n, a[1000];
    int i;
    long long current, maxSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    current = a[0];
    maxSum = a[0];

    for (i = 1; i < n; i++) {
        if (current + a[i] > a[i])
            current += a[i];
        else
            current = a[i];

        if (current > maxSum)
            maxSum = current;
    }

    printf("%lld", maxSum);

    return 0;
}
