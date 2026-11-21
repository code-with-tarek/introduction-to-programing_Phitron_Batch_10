// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Replace every positive number by 1.
// Replace every negative number by 2.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers (-105  ≤  Ai  ≤  105).

// Output
// Print the array after the replacement and it's values separated by space.

// Example
// InputCopy
// 5
// 1 -2 0 3 4
// OutputCopy
// 1 2 0 1 1 


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("1 ");
        }
        else if(a[i]<0)
        {
            printf("2 ");
        }
        else
        {
            printf("0 ");
        }
    }
    return 0;
}