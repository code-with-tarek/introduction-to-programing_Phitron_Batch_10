// Given 4 numbers A
// , B
// , C
//  and D
// . Print the last 2 digits from their Multiplication.

// Input
// Only one line containing four numbers A
// , B
// , C
//  and D
//  (2≤A,B,C,D≤109)
// .

// Output
// Print the last 2 digits from their Multiplication.

// Examples
// InputCopy
// 5 7 2 4
// OutputCopy
// 80
// InputCopy
// 3 9 9 9
// OutputCopy
// 87
// Note
// First Example :

// the Multiplication of 4 numbers is 5 * 7 * 2 * 4 = 280 so the answer will be the last 2 digits which are 80.

// Second Example :

// the Multiplication of 4 numbers is 3 * 9 * 9 * 9 = 2187 so the answer will be the last 2 digits which are 87.






 
#include <stdio.h>
 
int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
 
    long long ans = (a % 100) * (b % 100) % 100;
    ans = (ans * (c % 100)) % 100;
    ans = (ans * (d % 100)) % 100;
 
    printf("%02lld", ans);
 
    return 0;
}