#include <stdio.h>

int main(void)
{
    printf("ax^4+bx^3+cx^2+dx+e=0 ");
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int aprime, bprime, cprime, dprime;
    aprime=a*4;
    bprime=b*3;
    cprime=c*2;
    dprime=d*1;
    printf("%dx^3+%dx^2+%dx^1+%d\n", aprime, bprime, cprime, dprime);
    aprime=aprime*3;
    bprime=bprime*2;
    cprime=cprime*1;
    printf("%dx^2+%dx^1+%d\n", aprime, bprime, cprime);
    return 0;
}