#include <stdio.h>

int main()
{
    int r, c, a[20][20];
    int i, j, col, row;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(col = 0; col < c; col++)
    {
        i = 0;
        j = col;

        while(i < r && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    for(row = 1; row < r; row++)
    {
        i = row;
        j = c - 1;

        while(i < r && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
