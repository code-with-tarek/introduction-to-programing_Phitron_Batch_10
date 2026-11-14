#include <stdio.h>
void fun(int n)
{
    if (n > 5)
    {
        return;
    }

    printf("%d\n", n);
    fun(n + 1);
}
int main()
{
    int n = 1;
    // scanf("%d", &n);
    fun(n);

    return 0;
}