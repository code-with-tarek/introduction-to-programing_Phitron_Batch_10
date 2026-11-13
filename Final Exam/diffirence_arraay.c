#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int A[N], B[N], C[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            C[i] = A[i] - B[i];

            if (C[i] < 0)
            {
                C[i] = -C[i];
            }
        }

        for (int i = 0; i < N; i++)
        {
            printf("%d ", C[i]);
        }

        printf("\n");
    }

    return 0;
}