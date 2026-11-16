// Given a number N
// . Determine whether N
//  is float number or integer number.

// Note:

// If N
//  is float number then print "float" followed by the integer part followed by decimal part separated by space.
// If N
//  is integer number then print "int" followed by the integer part separated by space.
// For more clarification see the examples below.

// Input
// Only one line containing a number N
//  (1≤N≤103)

// Output
// Print the answer required above.

// Examples
// InputCopy
// 234.000
// OutputCopy
// int 234
// InputCopy
// 534.958
// OutputCopy
// float 534 0.958



#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);

    int b = a;
    float c = a - b;
    if(a != b)
    {
        printf("float %d %.3f",b,c);
    }
    else
    {
        printf("int %d",b);
    }
    return 0;
}