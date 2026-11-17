// Given a number N
// . Print all prime numbers between 1 and N
//  inclusive.

// A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

// In other words : prime number divisible only by 1 and itself.

// Be careful that 1 is not prime .

// The first few prime numbers are


// Input
// Only one line containing a number N
//  (2≤N≤103)
// .

// Output
// Print all prime numbers between 1 and N
//  (inclusive) separated by a space.

// Example
// InputCopy
// 10
// OutputCopy
// 2 3 5 7 

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("No prime numbers in this range.\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}