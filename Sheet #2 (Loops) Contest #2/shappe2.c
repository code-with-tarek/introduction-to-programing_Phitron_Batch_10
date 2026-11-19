// Given a number N. Print a pyramid that has N rows.

// For more clarification see the example below.

// Input
// Only one line containing a number N (1 ≤ N ≤ 99).

// Output
// Print the answer according to the required above.

// Example
// InputCopy
// 4
// OutputCopy
//    *
//   ***
//  *****
// *******
// Note
// Don't print any extra spaces after symbol " * ".


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
 
    int star = 1;
    int space = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=n-space; j>=1; j--)
        {
            printf(" ");
        }
        space++;
        for(int j=1; j<=star; j++)
        {
            printf("*");
        }
        printf("\n");
        star +=2;
    }
    
    return 0;
}