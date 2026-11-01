#include <stdio.h>

int main() {
    int n, a[1000];
    int i, result = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        result ^= a[i];
    }

    for (i = 1; i < n; i++)
        result ^= i;

    printf("%d", result);

    return 0;
}
