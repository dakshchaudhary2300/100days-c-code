#include <stdio.h>

int main()
{
    int n, m, a[100], b[100], c[200];
    int i, k = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
        c[k++] = a[i];

    for(i = 0; i < m; i++)
        c[k++] = b[i];

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
