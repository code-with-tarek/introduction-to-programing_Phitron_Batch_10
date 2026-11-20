// You are given a range represented by two integers L
//  and R
// , and you should find the sum of the numbers in the range between L
//  and R
//  inclusive.

// Input
// First line contains a number T
//  (1≤T≤105
// ) – the number of test cases.

// Each of the next T
//  lines contains two numbers L,R
//  (1≤L,R≤109
// ).

// Output
// For each test case, print the sum.

// Example
// InputCopy
// 4
// 3 6
// 2 11
// 4 16
// 7 17
// OutputCopy
// 18
// 65
// 130
// 132

#include<stdio.h>
int main()
{
    int t;
    if(scanf("%d",&t) != 1) return 0;

    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int sum = 0;
        for(int i=a; i<=b; i++)
        {
            sum += i;
        }
        printf("%d\n",sum);
    }
    return 0;
}