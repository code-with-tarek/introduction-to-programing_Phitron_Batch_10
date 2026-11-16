// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

// Output
// Print the minimum number followed by a single space then print the maximum number.

// Examples
// InputCopy
// 1 2 3
// OutputCopy
// 1 3
// InputCopy
// -1 -2 -3
// OutputCopy
// -3 -1
// InputCopy
// 10 20 -5
// OutputCopy
// -5 20


#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    //Minimum
    if(a<=b && a<=c)
    {
        printf("%d ",a);
    }
    else if(b<=a && b<=c)
    {
        printf("%d ",b);
    }
    else if(c<=a && c<=b)
    {
        printf("%d ",c);
    }
 
    //Maximum
    if(a>=b && a>=c)
    {
        printf("%d",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d",b);
    }
    else if(c>=a && c>=b)
    {
        printf("%d",c);
    }
    return 0;
}