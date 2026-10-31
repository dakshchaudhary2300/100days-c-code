#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    int freq[256] = {0};
    int i;

    scanf("%s %s", s1, s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++) {
        freq[(unsigned char)s1[i]]++;
        freq[(unsigned char)s2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
