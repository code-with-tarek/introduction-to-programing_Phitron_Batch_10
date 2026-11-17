// Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

// Note: The "Correct" password is the number 1999.

// Input
// The input contains several passwords.

// Each line contains a number X (103 ≤ X ≤ 104 - 1).

// Output
// Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.

// Example
// InputCopy
// 2200
// 1020
// 1999
// 1000
// 9999
// OutputCopy
// Wrong
// Wrong
// Correct


#include <stdio.h>

int main() {
    int x = 0; // নিরাপদ প্রাথমিক মান
    
    while (scanf("%d", &x) != EOF) {    // EOF = End of file
        if (x == 1999) {
            printf("Correct\n");
            break; // সঠিক পাসওয়ার্ড পেলে সাথে সাথে লুপ থামিয়ে দেওয়া
        } else {
            printf("Wrong\n");
        }
    }
    
    return 0;
}