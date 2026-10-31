#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], longest[1000] = "";
    char word[1000];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > strlen(longest))
                strcpy(longest, word);

            j = 0;

            if (str[i] == '\0')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}
