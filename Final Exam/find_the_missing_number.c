#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long product = A * B * C;

        if (M % product == 0)
        {
            printf("%lld\n", M / product);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}