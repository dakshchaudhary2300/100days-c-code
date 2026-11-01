#include <stdio.h>

int main() {
    int n, a[1000];
    int i, j, ans;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        ans = -1;

        for (j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                ans = a[j];
                break;
            }
        }

        printf("%d", ans);

        if (i != n - 1)
            printf(",");
    }

    return 0;
}
