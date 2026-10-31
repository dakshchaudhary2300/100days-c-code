#include <stdio.h>

int main()
{
    int r, c, a[20][20];
    int i, j, distinct = 1;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r && i < c; i++)
    {
        for(j = i + 1; j < r && j < c; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
