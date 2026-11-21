// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

// It's guaranteed that all numbers are distinct.

// Output
// Print the array after the replacement operation.

// Example
// InputCopy
// 5
// 4 1 3 10 8
// OutputCopy
// 4 10 3 1 8 

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX, max = INT_MIN;
    int min_idx = 0, max_idx = 0;

    // ধাপ ১: পুরো অ্যারে ঘুরে min ও max-এর ইনডেক্স খুঁজে বের করা
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            min_idx = i;
        }
        if (a[i] > max) {
            max = a[i];
            max_idx = i;
        }
    }

    // ধাপ ২: লুপের বাইরে এসে অ্যারের ওই দুটি পজিশনের মান অদলবদল করা
    int temp = a[min_idx];
    a[min_idx] = a[max_idx];
    a[max_idx] = temp;

    // ধাপ ৩: পরিবর্তিত অ্যারে প্রিন্ট করা
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}