#include <stdio.h>
//関数を使った微分
int fprime(int a, int n)
{
    int yprime=a*n;
    return yprime;
}

int main(void)
{
    int p, m;
    printf("ax^n=??");
    scanf("%d %d", &p, &m);
    int ans, b;
    ans=fprime(p,m);
    b=m-1;
    printf("%dx^%d", ans, b);
}