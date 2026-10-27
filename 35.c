#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive integer.\n");
        return 0;
    }

    printf("Factors: ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
