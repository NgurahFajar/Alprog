#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,x, y, z, test=1;
    scanf("%d\n%d %d",&n, &x, &y);
    for (int i = 2;i < n;i ++)
    {
        scanf("%d",&z);
        if (y < x && y < z)
        {
            test = 0;
            break; 
        }
        x = y;
        y = z;
    }
    if (!test)
    {
         printf("%d: tidak",n);
    }
    else printf("%d: cantik",n);
    puts("");
    return 0;
}