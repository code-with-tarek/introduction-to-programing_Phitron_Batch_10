// Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

// Note: consider the whole year has 365 days and 30 days per month.

// Input
// Only one line containing a number N (0 ≤ N ≤ 106).

// Output
// Print the output, like the following examples.

// Examples
// InputCopy
// 400
// OutputCopy
// 1 years
// 1 months
// 5 days
// InputCopy
// 800
// OutputCopy
// 2 years
// 2 months
// 10 days
// InputCopy
// 30
// OutputCopy
// 0 years
// 1 months
// 0 days



#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int years = n / 365;
    int m = n % 365;

    int  months = m / 30;
    int days = m % 30;

    printf("%d years\n",years);
    printf("%d months\n",months);
    printf("%d days\n",days);

    return 0;
}