#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int X=a%10;
    long long int Y=b%10;
   
    printf("%lld",X+Y);
}