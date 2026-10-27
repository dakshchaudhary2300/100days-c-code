#include <stdio.h>

int main() {
    int n, temp, digit;
    long long reverse = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not a palindrome\n");
        return 0;
    }

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    if (n == reverse)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
