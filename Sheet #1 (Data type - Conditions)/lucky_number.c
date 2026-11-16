#include <stdio.h>

int main() {
    int N;
    
    // দুই অঙ্কের সংখ্যা ইনপুট নেওয়া
    scanf("%d", &N);
    
    // অঙ্ক দুটি আলাদা করা
    int first = N / 10;
    int second = N % 10;
    
    // শূন্য দিয়ে ভাগ (Division by Zero) এড়িয়ে বিভাজ্যতা চেক করা
    if ((second != 0 && first % second == 0) || (first != 0 && second % first == 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}


// A number of two digits is lucky if one of its digits is divisible by the other.
// For example, 39, 82, and 55 are lucky, while 79 and 43 are not.
// Given a number between 10 and 99, determine whether it is lucky or not.
// Input
// Only one line containing a single number N
//  (10≤N≤99)
// .
// Output
// Print "YES" if the given number is lucky, otherwise print "NO".
// Examples
// InputCopy
// 39
// OutputCopy
// YES
// InputCopy
// 64
// OutputCopy
// NO