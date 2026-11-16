#include <stdio.h>   // help AI

int main() {
    long long n, m, k;
    
    // চোখ (n), মুখ (m) এবং শরীরের (k) সংখ্যা ইনপুট নেওয়া
    scanf("%lld %lld %lld", &n, &m, &k);
    
    // ধাপ ১: n, m, k এর মধ্যে সবচেয়ে ছোট মানটি বের করা (১ চোখ + ১ মুখ + ১ শরীর)
    long long min1 = n;
    if (m < min1) {
        min1 = m;
    }
    if (k < min1) {
        min1 = k;
    }
    
    // প্রথম ধাপে তৈরি পুতুলের সংখ্যা যোগ করা
    long long total = min1;
    
    // যে উপকরণগুলো খরচ হয়ে গেছে তা বাদ দেওয়া
    n -= min1;
    m -= min1;
    k -= min1;
    
    // ধাপ ২: অবশিষ্ট চোখ (n / 2) এবং অবশিষ্ট শরীর (k) এর মধ্যে ছোটটি বের করা
    long long min2 = n / 2;
    if (k < min2) {
        min2 = k;
    }
    
    // দ্বিতীয় ধাপে তৈরি পুতুলের সংখ্যা যোগ করা
    total += min2;
    
    // চূড়ান্ত ফলাফল প্রিন্ট করা
    printf("%lld\n", total);
    
    return 0;
}



// The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.
// If the king has n
//  eyes, m
//  mouths and k
//  bodies, what is the largest number of Katryoshkas he can make?
// Input
// Only one line containing three numbers n
// , m
//  and k
//  (0≤n,m,k≤1018
// ) – the number of eyes, mouths and bodies respectively.

// Output
// Print the largest number of Katryoshkas he can make.

// Examples
// InputCopy
// 1 2 3
// OutputCopy
// 1
// InputCopy
// 0 11 2
// OutputCopy
// 0
// InputCopy
// 90 24 89
// OutputCopy
// 57

