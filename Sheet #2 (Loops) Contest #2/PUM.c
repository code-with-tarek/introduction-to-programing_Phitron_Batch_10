// Given a number N. Print N lines that describes PUM game.

// For more clarification see the examples.

// Input
// Only one line containing a number N (1 ≤ N ≤ 20).

// Output
// Print the answer according to the required above.

// Examples
// InputCopy
// 7
// OutputCopy
// 1 2 3 PUM
// 5 6 7 PUM
// 9 10 11 PUM
// 13 14 15 PUM
// 17 18 19 PUM
// 21 22 23 PUM
// 25 26 27 PUM
// InputCopy
// 3
// OutputCopy
// 1 2 3 PUM
// 5 6 7 PUM
// 9 10 11 PUM
// Note
// Don't print any extra spaces.


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int num = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=4; j++)
        {
            if(num == 4*i)
            {
                printf("PUM");               
            }
            else
            {
                printf("%d ",num);
            }
            
            num++;
        }
        printf("\n");
        
    }
    return 0;
}