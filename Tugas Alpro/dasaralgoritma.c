#include <stdio.h>
int main ()
{
    int a, b, c, d, e, max, min;
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    if (a>=b)
    {
      max=a;  
    }
    else 
    {
      max=b;   
    }
    if (max>=c)
    {
      d=max;  
    }
    else 
    {
      d=c;  
    }
    if (a<=b)
    {
      min=a;  
    }
    else 
    {
      min=b;   
    }
    if (min<=c)
    {
      e=min;  
    }
    else 
    {
      e=c;  
    }
    printf("%d", d-e);
    return 0;
}