#include <stdio.h>

int main()
{
    int n, a[101], x, pos, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &x, &pos);

    if(pos < 0 || pos > n)
        return 0;

    for(i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
