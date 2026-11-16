// Given the boundaries of 2 intervals. Print the boundaries of their intersection.

// Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

// Input
// Only one line contains two intervals [l1,r1]
// , [l2,r2]
//  where (1≤l1,l2,r1,r2≤109)
// , (l1≤r1,l2≤r2)
// .

// It's guaranteed that l1≤r1
//  and l2≤r2
// .

// Output
// If there is an intersection between these 2 intervals print its boundaries , otherwise print -1.

// Examples
// InputCopy
// 1 15 5 27
// OutputCopy
// 5 15
// InputCopy
// 2 5 6 12
// OutputCopy
// -1
// Note
// First Example :


// Second Example :





#include<stdio.h>
int main()
{
    int l1,r1,l2,r2;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    int max,min;

    if(l1 > l2)
    {
        max = l1;
    }
    else
    {
        max = l2;
    }
    if(r1 < r2)
    {
        min = r1;
    }
    else 
    {
        min = r2;
    }
    if(max <= min)
    {
        printf("%d %d",max,min);
    }
    else
    {
        printf("-1");
    }
    return 0;
}