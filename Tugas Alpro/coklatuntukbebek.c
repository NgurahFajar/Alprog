#include <stdio.h>
#include <math.h>
int main ()
{
    long long int x, result, n;
    double y;
    scanf("%lld", &x);
    y=sqrt(2.0*x);
    n=(long long int)y;
    if (n*(n+1)<=2*x)
    {
        result=n+1;
    }
    else result = n;
    printf("%lld\n", result);
    return 0;
}