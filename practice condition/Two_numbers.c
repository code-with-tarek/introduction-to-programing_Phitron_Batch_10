#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    double ans = (double)a / b;
    int f = floor(ans);
    int c = ceil(ans);
    int r = round(ans);

    printf("floor %d / %d = %d\n",a,b,f);
    printf("ceil %d / %d = %d\n",a,b,c);
    printf("round %d / %d = %d\n",a,b,r);
    return 0;
}