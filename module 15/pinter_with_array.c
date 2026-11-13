#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    *a = 100;
    *(a + 1) = 200;
    *(a + 3) = 400;

    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}