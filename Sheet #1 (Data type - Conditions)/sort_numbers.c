// Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

// Input
// Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

// Output
// Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

// Examples
// InputCopy
// 3 -2 1
// OutputCopy
// -2
// 1
// 3

// 3
// -2
// 1
// InputCopy
// -2 10 0
// OutputCopy
// -2
// 0
// 10

// -2
// 10
// 0



#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x,y,z;
    x = a;
    y = b;
    z = c;

    if(a >= b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if(a >= c)
    {
        int temp2 = a;
        a = c;
        c = temp2;
    }
    if(b >= c)
    {
        int temp3 = b;
        b = c; 
        c = temp3;
    }
    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}