// Given two numbers N and M. Print the summation of their last digits.

// Input
// Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

// Output
// Print the answer of the problem.

// Example
// InputCopy
// 13 12
// OutputCopy
// 5
// Note
// First Example :

// last digit in the first number is 3 and last digit in the second number is 2.

// So the answer is: (3 + 2 = 5)



#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int X=a%10;
    long long int Y=b%10;
   
    printf("%lld",X+Y);
}