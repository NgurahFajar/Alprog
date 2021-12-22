#include <stdio.h>
int main()
{
 int a, b, c, d, e, f, selisih;
 scanf ("%d", &a);
 scanf ("%d", &b);
 scanf ("%d", &c);
 d=a-b;
    if (d<0)    
    {
        d*(-1);   
    }    
 e=a-c;
    if (e<0)
    {
        e*(-1);
    }
 f=b-c;
    if (f<0)
    {
        f*(-1);
    }
        if (d>=e)
        { 

            selisih = d;
        }
    
        else
        {    
            selisih = e;
        }
    
        if (selisih >= f)
        {
            printf ("%d", selisih);
        }
        else 
        {
            printf ("%d", f);
        }
        return 0;
}
