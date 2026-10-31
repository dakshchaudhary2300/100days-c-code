#include <stdio.h>

int main()
{
    long long n;
    int freq[10] = {0};
    int digit, i, max = 0, ans = 0;

    scanf("%lld", &n);

    if(n == 0)
        freq[0]++;

    while(n != 0)
    {
        digit = n % 10;

        if(digit < 0)
            digit = -digit;

        freq[digit]++;
        n /= 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}
