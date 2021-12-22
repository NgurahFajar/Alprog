#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    for(int i=0; i<a; i++)
    {
        int cek=0;
        scanf("%d", &b);
        for(int j=1; j<=sqrt(b); j++){
            if(b%j==0) cek++;
        }
        cek*=2;
        if(sqrt(b)==ceil(sqrt(b))) cek--;
        printf("%d\n", cek);
    }
return 0;
}