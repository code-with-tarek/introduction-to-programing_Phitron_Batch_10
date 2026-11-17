// Given a number N. Print numbers from 1 to N in separate lines.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print N lines according to the required above.

// Example
// InputCopy
// 5
// OutputCopy
// 1
// 2
// 3
// 4
// 5


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
{
    printf("%d\n",i);
}
return 0;
}