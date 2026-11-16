// Peter Parker had worked hard throughout his digital logic course, but when he was asked to implement a 32
//  bit adder for a machine, he made a mistake in the design part. After tracing the design for half an hour, he found his flaw!! He was doing bitwise addition, but the carry bit is always zero.

// 4=00000000000000000000000000000100

// +

// 6=00000000000000000000000000000110

// =

// 2=00000000000000000000000000000010

// Now, he has to write an efficient program that would take 2
//  unsigned 32
//  bit decimal numbers as input, and reproduce the output by adding them in the same way as his circuit does.

// Input
// Only One line containing two decimal numbers A
//  and B
//  (0≤A,B≤109
// ).

// Output
// Print the value after adding A
//  and B
//  in Peter Parker's way.

// Examples
// InputCopy
// 4 6
// OutputCopy
// 2
// InputCopy
// 6 9
// OutputCopy
// 15

#include <stdio.h>  //help for AI

int main() {
    unsigned int A, B;
    
    // দুটি সংখ্যা ইনপুট নেওয়া
    scanf("%u %u", &A, &B);
    
    // ক্যারি ছাড়া বাইনারি যোগ অর্থাৎ Bitwise XOR (^) করা
    unsigned int result = A ^ B;
    
    // ফলাফল প্রিন্ট করা
    printf("%u\n", result);
    
    return 0;
}