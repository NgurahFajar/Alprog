#include <stdio.h>
#include <math.h>

int main()
{
    int n, h, max;
    scanf("%d", &n);
    scanf("%d", &h);
    printf("%d", h);
    max=h;
    for(int i=2; i<=n; i++)
    {
        scanf("%d", &h);
        if(h > max)
        {
            printf(" %d", h);
            max=h;
        }
    }
    printf("\n");
}