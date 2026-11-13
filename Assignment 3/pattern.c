#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int space, hash, dash;

    for (int i = 1; i <= N; i++)
    {
        space = N - i;
        hash = 2 * i - 1;
        dash = 2 * i - 1;

        for (int j = 1; j <= space; j++)
            printf(" ");

        if (i % 2 == 1)
        {
            for (int j = 1; j <= hash; j++)
                printf("#");
        }
        else
        {
            for (int j = 1; j <= dash; j++)
                printf("-");
        }

        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--)
    {
        space = N - i;
        hash = 2 * i - 1;
        dash = 2 * i - 1;

        for (int j = 1; j <= space; j++)
            printf(" ");

        if (i % 2 == 1)
        {
            for (int j = 1; j <= hash; j++)
                printf("#");
        }
        else
        {
            for (int j = 1; j <= dash; j++)
                printf("-");
        }

        printf("\n");
    }

    return 0;
}