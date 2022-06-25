#include <stdio.h>
// 定数になるまで微分
int main(void)
{
    int a, n;
    printf("ax^n=?? ");
    scanf("%d %d", &a, &n);
    int i, j=1, b=a, c=n;
    for(i=n; i>=1; i--)
    {
        b=b*c;
        c=i-1;
        printf("%d回微分は%dx^%d\n", j, b, c);
        j++;
    }
    return 0;
}