// Given a mathematical expression. The expression will be one of the following expressions: A+B
// , A−B
// , A∗B
//  and A/B
// .

// Print the result of the mathematical expression.

// Input
// Only one line contains A,S
//  and B
//  (1≤A,B≤104)
// , S
//  is either (+,−,∗,/)
// .

// Output
// Print the result of the mathematical expression.

// Examples
// InputCopy
// 7+54
// OutputCopy
// 61
// InputCopy
// 17*10
// OutputCopy
// 170
// Note
// For the dividing operation you should print the division without any fractions.



#include <stdio.h>

int main()
{
    int a, b;
    char s;

    scanf("%d%c%d", &a, &s, &b);

    if(s == '+')
    {
        printf("%d\n", a + b);
    }
    else if(s == '-')
    {
        printf("%d\n", a - b);
    }
    else if(s == '*')
    {
        printf("%d\n", a * b);
    }
    else if(s == '/')
    {
        printf("%d\n", a / b);
    }

    return 0;
}
