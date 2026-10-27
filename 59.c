#include <stdio.h>

int main() {
    int a[100], n, i, even = 0, odd = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\nOdd = %d\n", even, odd);

    return 0;
}
