// One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
//  numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
// ) between the other three numbers; so that each operator is used only once.
// a□b□c=d
// Can you solve this tricky puzzle for him?
// Input
// Only one line containing four numbers a
// , b
// , c
//  and d
//  (−10
// 9
// ≤a,b,c≤10
// 9
// ),(−10
// 18
// ≤d≤10
// 18
// ).
// Output
// Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).
// Examples
// InputCopy
// 3 4 5 23
// OutputCopy
// YES
// InputCopy
// 9 5 3 7
// OutputCopy
// YES
// InputCopy
// 1 2 3 1
// OutputCopy
// NO


#include <stdio.h>

int main() {
    long long a, b, c, d;
    
    // চারটি সংখ্যা ইনপুট নেওয়া
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    // ৬টি সম্ভাব্য কম্বিনেশন চেক করা
    if (a + b - c == d || 
        a + b * c == d || 
        a - b + c == d || 
        a - b * c == d || 
        a * b + c == d || 
        a * b - c == d) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
