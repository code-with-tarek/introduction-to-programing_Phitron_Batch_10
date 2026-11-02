#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    int ans =ceil(x);
    printf("Ceil %d\n",ans);

    int ans2 =floor(4.5);
    printf("Floor %d\n",ans2);

    int ans3 =round(4.5);
    printf("Round %d\n",ans3);

    int ans4 =sqrt(49);
    printf("Squrt %d\n",ans4);

    int ans5 =pow(4,5);
    printf("Power %d\n",ans5);

    int ans6 =abs(-10);
    printf("Absulet %d\n",ans6);

    return 0;
}