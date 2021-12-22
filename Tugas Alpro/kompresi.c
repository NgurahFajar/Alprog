#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, n, check;
    scanf("%d", &a);
    for(int i=0; i<a; i++)
    {
        scanf("%d", &n);
        check=1;
        while(n != -9)
        {
            scanf("%d", &b);
            if(b==n) check++;
            else
            {
                printf("%d(%d)", n, check);
                check=1;
                n=b;
            }
        }
        printf("\n");
    }
return 0;
}