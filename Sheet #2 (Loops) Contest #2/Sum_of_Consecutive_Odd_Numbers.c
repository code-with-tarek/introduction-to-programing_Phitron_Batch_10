// Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

// Input
// First line contains a number T (1 ≤ T ≤ 10) number of test cases.

// Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).

// Output
// Print the sum of all odd numbers between X and Y (excluding X and Y).

// Example
// InputCopy
// 3
// 5 6
// 10 4
// 4 9
// OutputCopy
// 0
// 21
// 12



#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);

        // x বড় হলে x এবং y এর মান অদলবদল করা
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        int sum = 0;
        for (int i = x + 1; i < y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        // প্রতিটি টেস্ট কেসের উত্তর আলাদা লাইনে প্রিন্ট করা
        printf("%d\n", sum);
    }

    return 0;
}