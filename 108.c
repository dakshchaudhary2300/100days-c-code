#include <stdio.h>

int main() {
    int n, nums[1000], answer[1000];
    int i;
    long long prefix = 1, suffix = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (i = 0; i < n; i++)
        printf("%d ", answer[i]);

    return 0;
}
