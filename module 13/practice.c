#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int space = n-1;
    for(int i=1; i<=n; i++)
    {
        char ch = 'A';
        for(int j=1; j<=space; j++)
        {
            printf(" ");

        }
        for(int j=1; j<=i; j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
        space--;
    }
    return 0;
}