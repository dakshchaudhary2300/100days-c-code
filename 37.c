#include <stdio.h>

int main() {
    int a, b, x, y, temp, gcd;
    long long lcm;

    printf("Enter two non-negative integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0) {
        printf("Enter non-negative integers.\n");
        return 0;
    }

    x = a;
    y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    if (a == 0 || b == 0)
        lcm = 0;
    else
        lcm = (long long)(a / gcd) * b;

    printf("LCM = %lld\n", lcm);

    return 0;
}
