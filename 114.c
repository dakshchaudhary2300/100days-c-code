#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last[256];
    int i, start = 0, maxLen = 0, len;

    scanf("%s", s);

    for (i = 0; i < 256; i++)
        last[i] = -1;

    len = strlen(s);

    for (i = 0; i < len; i++) {
        unsigned char ch = s[i];

        if (last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d", maxLen);

    return 0;
}
