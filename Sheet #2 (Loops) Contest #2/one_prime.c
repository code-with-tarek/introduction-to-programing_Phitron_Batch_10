// Given a number X. Determine if the number is prime or not

// Note:

// A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

// In other words : prime number divisible only by 1 and itself.

// Be careful that 1 is not prime .

// The first few prime numbers are


// Input
// Only one line containing a number X (2 ≤ X ≤ 105).

// Output
// print "YES" if the number is prime and "NO" otherwise.

// Examples
// InputCopy
// 7
// OutputCopy
// YES
// InputCopy
// 15
// OutputCopy
// NO
// Note
// First Example :

// 7 is prime because it is not divisible by 2,3,4,5,6, and only divisible by 1 and itself, so the answer is YES.

// Second Example :

// 15 not is prime because it is divisible by 3 ,5, so the answer is NO.


#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // ১ বা তার ছোট সংখ্যা মৌলিক হতে পারে না
    if(n <= 1)
    {
        printf("NO\n");
        return 0; // প্রোগ্রাম এখানেই শেষ হয়ে যাবে
    }
    
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            count++;
            break; // বিভাজ্য পেলে লুপ ভেঙে বের হয়ে যাওয়া
        }
    }
    
    if(count == 0)
    {
        printf("YES\n");
    }    
    else
    {
        printf("NO\n");
    }
    
    return 0;
}



// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n;
//     scanf("%d", &n);
    
//     // ১ বা তার ছোট সংখ্যা মৌলিক হতে পারে না
//     if (n <= 1) {
//         printf("NO\n");
//         return 0;
//     }
    
//     int flag = 1; // ধরে নিলাম সংখ্যাটি মৌলিক (1 মানে হ্যাঁ)
    
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             flag = 0; // যদি ভাগ মিলে যায়, তবে এটি মৌলিক নয় (0 মানে না)
//             break;    // লুপ ভেঙে বের হয়ে যাওয়া
//         }
//     }
    
//     // ফ্ল্যাগ চেক করে ফলাফল প্রিন্ট করা
//     if (flag == 1) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
    
//     return 0;
// }