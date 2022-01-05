#include <stdio.h>
#include <math.h>
int main()
{
    printf("2");
    //%lf  表示输入双精度实数
    double a,b,c,disc,x1,x2,p,q;
    scanf("%lf%lf%lf",&a,&b,&c);
    disc=b*b-4*a*c;
    p=-b/(2.0*a);
    q = sqrt(disc)/(2.0*a);
    x1=p+q,x2=p-q;
    //%7.2f 表示在输出x1，x2时候 数据占7列，小数占两列
    //%d：按照整型数据的实际长度输出。
    //%md：以 m 为指定的最小字段宽度输出，右对齐。
    //%ld：输出长整型数据。
    //%mld：输出指定宽度的长整型数据。
    printf("x1=%7.2f\ns2=%7.2f\n",x1,x2);
    return 0;
}
