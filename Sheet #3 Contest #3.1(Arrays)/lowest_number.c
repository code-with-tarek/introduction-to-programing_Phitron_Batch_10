// Given a number N and an array A of N numbers. Print the lowest number and its position.

// Note: if there are more than one answer print first one's position.

// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers (-105  ≤  Ai  ≤  105).

// Output
// Print the lowest number and its position (1-index).

// Examples
// InputCopy
// 3
// 1 2 3
// OutputCopy
// 1 1
// InputCopy
// 5
// 5 6 2 3 2
// OutputCopy
// 2 3

#include<stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min= INT_MAX;
    int pos=-1;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            pos=i;
        }
    }
    printf("%d %d",min,pos);
    return 0;
}