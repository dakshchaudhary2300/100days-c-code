#include <stdio.h>

int main() {
    int m, n;
    int a[1000], b[1000], result[2000];
    int i, j, k;

    scanf("%d", &m);

    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while (i < m)
        result[k++] = a[i++];

    while (j < n)
        result[k++] = b[j++];

    for (i = 0; i < k; i++)
        printf("%d ", result[i]);

    return 0;
}
