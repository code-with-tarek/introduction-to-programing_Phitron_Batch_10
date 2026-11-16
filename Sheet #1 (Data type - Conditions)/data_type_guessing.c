// Given three numbers n
// , k
//  and a
// . Identify whether the data type of n×k
// a
//  is int, long long or double.

// Input
// Only one line containing three numbers n
// , k
//  and a
//  (1≤a,k,n≤2147483647
// ).
// Output
// Print "int", "long long" or "double" (without quotes) as described in the statement.
// Examples
// InputCopy
// 3 6 9
// OutputCopy
// int
// InputCopy
// 100000 200000 4
// OutputCopy
// long long
// Note
// double is when a number has a floating-point.
// int Range: [−2147483648,2147483647
// ].
// long long can hold values of a bigger range than that of int.



#include <stdio.h>

int main() {
    long long n, k, a;
    
    // ওভারফ্লো এড়াতে long long-এ ইনপুট নেওয়া
    scanf("%lld %lld %lld", &n, &k, &a);
    
    // যদি (n * k) সংখ্যাটি a দ্বারা নিঃশেষে বিভাজ্য না হয়, তবে ফলাফল দশমিক (double) হবে
    if ((n * k) % a != 0) {
        printf("double\n");
    } 
    else {
        // নিঃশেষে বিভাজ্য হলে পূর্ণসংখ্যা পাওয়া যাবে, এখন রেঞ্জ চেক করতে হবে
        long long result = (n * k) / a;
        
        if (result <= 2147483647) {
            printf("int\n");
        } else {
            printf("long long\n");
        }
    }
    
    return 0;
}