#include <stdio.h>

int main() {
    long long binary, result = 0, place = 1;
    int digit, valid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    if (binary < 0) {
        printf("Invalid binary number.\n");
        return 0;
    }

    if (binary == 0) {
        printf("1's complement = 1\n");
        return 0;
    }

    while (binary > 0) {
        digit = binary % 10;

        if (digit != 0 && digit != 1) {
            valid = 0;
            break;
        }

        result += (1 - digit) * place;
        place *= 10;
        binary /= 10;
    }

    if (valid)
        printf("1's complement = %lld\n", result);
    else
        printf("Invalid binary number.\n");

    return 0;
}
