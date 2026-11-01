#include <stdio.h>

int main() {
    int n, a[1000], k;
    int i, j, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    if (k >= 1 && k <= n)
        printf("%d", a[k - 1]);
    else
        printf("-1");

    return 0;
}
