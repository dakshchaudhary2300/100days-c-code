#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ch = tolower((unsigned char)ch);

    if (ch < 'a' || ch > 'z')
        printf("Not an alphabet\n");
    else if (ch == 'a' || ch == 'e' ||
             ch == 'i' || ch == 'o' || ch == 'u')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}
