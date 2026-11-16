// Given a lowercase alphabet character. You have to print the next character in the alphabet.

// Input
// Only one line containing a lowercase English letter C
// .

// Output
// Print the next letter to C
//  in the alphabet.

// Example
// InputCopy
// a
// OutputCopy
// b
// Note
// The next letter to z is a.


#include <stdio.h>

int main() {
    char c;
    
    // একটি ছোট হাতের অক্ষর ইনপুট নেওয়া
    scanf("%c", &c);
    
    // যদি ইনপুট 'z' হয়, তবে প্রিন্ট হবে 'a'
    if (c == 'z') {
        printf("a\n");
    } else {
        // অন্যথায় ঠিক পরের অক্ষরটি প্রিন্ট হবে (যেমন: 'a' হলে 'b')
        printf("%c\n", c + 1);
    }
    
    return 0;
}