#include <stdio.h>

int main() {
    char str[1000];
    int i, first = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

        if (first && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
            first = 0;
        }
    }

    printf("%s", str);

    return 0;
}
