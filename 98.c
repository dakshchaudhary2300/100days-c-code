#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    int i, lastSpace = -1, len;

    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    if (lastSpace == -1) {
        printf("%s", name);
        return 0;
    }

    printf("%c. ", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c. ", name[i]);
    }

    printf("%s", &name[lastSpace + 1]);

    return 0;
}
