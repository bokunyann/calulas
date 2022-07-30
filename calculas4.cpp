//分数関数の微分
#include <stdio.h>

int fprime1(int a, int n)
{
    int yprime1=a*n;
    return yprime1;
}
int fprime2(int b, int m)
{
    int yprime2=b*m;
    return yprime2;
}

int main(void)
{
    printf("ax^n/bx^m=?? ");
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int ans1=fprime1(a,b);
    int ans2=fprime2(c,d);
    int r1=b-1;
    int r2=d-1;
    //分子　微分そのまま、引く、そのまま微分
    printf("(%dx^%d)(%dx^%d)-(%dx^%d)(%dx^%d)/(%dx^%d)^2",ans1,r1,c,d,a,b,ans2,r2, c,d);
}