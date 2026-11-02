#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    
    long long int b;
    scanf("%lld",&b);

    char c;
    scanf(" %c",&c);

    float d;
    scanf("%f",&d);

    double e;
    scanf("%lf",&e);

    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%c\n",c);
    printf("%f\n",d);
    printf("%lf\n",e);

    return 0;
}