// Given 2 numbers A
//  and B
// . Print floor, ceil and round of A/B

// Note:

// Floor: Is a mathematical function that takes a real number X
//  and its output is the greatest integer less than or equal to X
// .
// Ceil: Is a mathematical function that takes a real number X
//  and its output is the smallest integer larger than or equal to X
// .
// Round: Is a mathematical function that takes a real number X
//  and its output is the closest integer to that number X
// .

// For more clarification visit the links in the notes below.

// Input
// Only one line containing two numbers A
//  and B
//  (1≤A,B≤103)

// Output
// Print 3 lines that contain the following in the same order:

// "floor A
//  / B
//  = Floor result" without quotes.
// "ceil A
//  / B
//  = Ceil result" without quotes.
// "round A
//  / B
//  = Round result" without quotes.
// Examples
// InputCopy
// 10 3
// OutputCopy
// floor 10 / 3 = 3
// ceil 10 / 3 = 4
// round 10 / 3 = 3
// InputCopy
// 10 4
// OutputCopy
// floor 10 / 4 = 2
// ceil 10 / 4 = 3
// round 10 / 4 = 3
// InputCopy
// 10 6
// OutputCopy
// floor 10 / 6 = 1
// ceil 10 / 6 = 2
// round 10 / 6 = 2


#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
 
    double ans = (double)a / b;
    int f = floor(ans);
    int c = ceil(ans);
    int r = round(ans);
 
    printf("floor %d / %d = %d\n",a,b,f);
    printf("ceil %d / %d = %d\n",a,b,c);
    printf("round %d / %d = %d\n",a,b,r);
    return 0;
}