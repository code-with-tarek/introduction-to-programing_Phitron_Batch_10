// Given multiple lines each line contains two numbers N and M.

// For each line print a single line contains:

// The numbers between N and M inclusive separated by single space.
// The message " sum =".
// The summation of all numbers between N and M inclusive.
// Note: The program should be TERMINATED as soon as any of these two numbers is less than or equal to zero and don't print any thing.

// For more clarification see the examples below.

// Input
// The input contains multiple line.

// Each line contains two numbers N and M (-100 ≤ N, M ≤ 100).

// It's guaranteed that the last line of the input will contain a number that is less than or equal to zero.

// Output
// For each line print the answer according to the required above in a single line.

// Examples
// InputCopy
// 5 2
// 5 7
// 5 -1
// OutputCopy
// 2 3 4 5 sum =14
// 5 6 7 sum =18
// InputCopy
// 5 2
// 6 3
// 5 0
// OutputCopy
// 2 3 4 5 sum =14
// 3 4 5 6 sum =18
// Note
// M may be greater than N and Vice Versa.


#include <stdio.h>

int main() {
    while (1) {
        int x, y;
        scanf("%d %d", &x, &y);

        // যেকোনো একটি সংখ্যা <= 0 হলেই প্রোগ্রাম বন্ধ
        if (x <= 0 || y <= 0) {
            return 0;
        }

        // x বড় হলে x এবং y এর মান অদলবদল করা
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        int sum = 0;
        for (int i = x; i <= y; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("sum =%d\n", sum);
    }

    return 0;
}
