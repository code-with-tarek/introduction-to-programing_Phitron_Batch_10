#include<stdio.h>

int sum()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int ans = x + y;
    return ans;
}
int main()
{   
    int val = sum();
    printf("%d",val);
    return 0;
}