#include <stdio.h>
//ekhane call stack methood follow hoy , call stack methood holo je uporer function age memory theke chole jay, ba main function sobar niche thake ar tar upore ektar por ekta function sajano hoy
void mello()
{
    printf("mello\n");
}
void gello()
{
    mello();
    printf("gello\n");
}
void hello()
{
    gello();
    printf("hello\n");
}
int main()
{
    hello();
    printf("hi\n");
    return 0;
}