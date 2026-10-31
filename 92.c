#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] > 0) {
                printf("%c", str[i]);
                return 0;
            }

            freq[str[i] - 'a']++;
        }
    }

    printf("-1");

    return 0;
}
