//合成関数の微分
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
    int a,b,c,d;
    printf("(ax^n)(bx^m)=?? ");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int ans1=fprime1(a,b);
    int ans2=fprime2(c,d);
    int r1,r2;
    r1=b-1;
    r2=d-1;
    //微分そのまま、足す、そのまま微分
    printf("(%dx^%d)(%dx^%d)+(%dx^%d)(%dx^%d)",ans1,r1,c,d,a,b,ans2,r2);
    return 0;   
}