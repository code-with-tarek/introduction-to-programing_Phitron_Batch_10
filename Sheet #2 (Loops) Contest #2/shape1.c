// Given a number N. Print a face down right angled triangle that has N rows.

// For more clarification see the example below.

// Input
// Only one line containing a number N (1 ≤ N ≤ 99).

// Output
// Print the answer according to the required above.

// Example
// InputCopy
// 4
// OutputCopy
// ****
// ***
// **
// *
// Note
// Don't print any extra spaces after symbol " * ".


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int star = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=star; j--)
        {
            printf("*");
        }
        printf("\n");
        star++;
    }
    
    return 0;
}