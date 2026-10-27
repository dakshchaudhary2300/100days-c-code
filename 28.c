#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
        product *= i;

    if (n < 2)
        printf("No even numbers in the range.\n");
    else
        printf("Product = %lld\n", product);

    return 0;
}
