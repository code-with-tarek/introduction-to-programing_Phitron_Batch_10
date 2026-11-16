// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

// Note : difference between 'a' and 'A' in ASCII is 32 .

// Input
// Only one line containing a character X which will be a capital or small letter.

// Output
// Print the answer to this problem.

// Examples
// InputCopy
// a
// OutputCopy
// A
// InputCopy
// A
// OutputCopy
// a


#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>='a'&& x<='z')
    {
        printf("%c",x-32);
    }
    else
    {
        printf("%c",x+32);
    }
    return 0;
}