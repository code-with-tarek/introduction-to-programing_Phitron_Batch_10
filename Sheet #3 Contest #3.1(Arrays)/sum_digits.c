// Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

// Input
// First line contains a number N (1  ≤  N  ≤  106) number of digits.

// Second line contains N digits (0 ≤ Ai ≤ 9).

// Output
// Print the summation of these digits.

// Example
// InputCopy
// 5
// 13305
// OutputCopy
// 12
// Note
// First Example :

// 1 + 3 + 3 + 0 + 5 = 12 .



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }

    printf("%lld\n", sum);
    return 0;
}