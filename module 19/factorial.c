#include <stdio.h>
long long fun(int n, int i)
{
    if (i == n + 1)
    {
        return 1;
    }
    long long factorial = i * fun(n, i + 1);
    return factorial;
}
int main()
{
    int n;
    scanf("%d", &n);

    long long factorial = fun(n, 1);
    printf("%lld\n", factorial);
    return 0;
}