#include <stdio.h>
int main()
{
    long c;
    double f;
    scanf("%ld", &c);
    f=c*9/5.0+32;
    printf("%.2lf\n", f);
    return 0;
}

