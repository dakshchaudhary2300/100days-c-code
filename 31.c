#include <stdio.h>

int main() {
    unsigned int n, temp, binary[32];
    int i = 0, j;

    printf("Enter a non-negative integer: ");
    scanf("%u", &n);

    temp = n;

    if (temp == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (temp > 0) {
        binary[i++] = temp % 2;
        temp /= 2;
    }

    printf("Binary = ");
    for (j = i - 1; j >= 0; j--)
        printf("%u", binary[j]);

    printf("\n");
    return 0;
}
