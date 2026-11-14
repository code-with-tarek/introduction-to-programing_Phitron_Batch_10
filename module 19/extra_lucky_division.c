#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // 1 to 100 all lucky number
    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int is_almost_lucky = 0;

    // number lucky kina check kora
    for (int i = 0; i < 14; i++)
    {
        if (n % lucky[i] == 0)
        {
            is_almost_lucky = 1;
            break;
        }
    }

    if (is_almost_lucky == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}