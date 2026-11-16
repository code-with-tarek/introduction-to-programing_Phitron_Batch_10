// Given two numbers a
//  and b
// . You have to answer with "YES" if there is a non-empty interval consisting of numbers from l
//  to r
//  (l,l+1,l+2,...,r
// ) with a odd numbers and b even numbers, or "NO" otherwise.

// Input
// Only one line containing two numbers a
//  and b
//  (0≤a,b≤100
// )the number of odd numbers and the number of even numbers in the interval respectively.

// Output
// Print "YES" or "NO" as described in the statement.

// Examples
// InputCopy
// 2 3
// OutputCopy
// YES
// InputCopy
// 3 1
// OutputCopy
// NO
// Note
// Example 1 :

// some valid intervales that contain 2
//  odd numbers and 3
//  even numbers can be

// l=6,r=10
//  contains numbers (6,7,8,9,10)
// .

// l=14,r=18
//  contains numbers (14,15,16,17,18)
// .


#include <stdio.h>
#include <stdlib.h> // abs() ফাংশনের জন্য

int main() {
    int a, b;
    
    // ইনপুট নেওয়া
    scanf("%d %d", &a, &b);
    
    // যদি দুটোই ০ হয় তবে সেটি empty interval হবে, তাই NO
    if (a == 0 && b == 0) {
        printf("NO\n");
    } 
    // বিজোড় ও জোড় সংখ্যার পার্থক্য সর্বোচ্চ ১ হলে YES
    else if (abs(a - b) <= 1) {
        printf("YES\n");
    } 
    else {
        printf("NO\n");
    }
    
    return 0;
}