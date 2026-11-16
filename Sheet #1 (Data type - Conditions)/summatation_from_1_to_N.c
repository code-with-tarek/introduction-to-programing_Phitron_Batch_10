// Given a number N
// . Print the summation of the numbers that is between 1 and N
//  (inclusive).

// .∑i=1Ni
// Input
// Only one line containing a number N
//  (1≤N≤109)

// Output
// Print the summation of the numbers that are between 1 and N
//  (inclusive).

// Examples
// InputCopy
// 3
// OutputCopy
// 6
// InputCopy
// 10
// OutputCopy
// 55


#include <stdio.h>
 
int main()
{
    long long int n;
    scanf("%lld", &n);
 
    long long int sum = (n * (n + 1)) / 2;
 
    printf("%lld\n", sum);
 
    return 0;
}