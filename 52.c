#include <stdio.h>

int main() {
    int i, j, spaces;

    for (i = 1; i <= 5; i++) {
        int count = (i <= 3) ? 2 * i - 1 : 2 * (5 - i) + 1;

        spaces = (9 - count) / 2;

        for (j = 0; j < spaces; j++)
            printf(" ");

        for (j = 0; j < count; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
