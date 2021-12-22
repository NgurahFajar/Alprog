#include <stdio.h>
#include <math.h>
int main()
{
    int a=9, b=6, c=7, d=4;
   if (a>b && c>d){
   if (a>d || c<d){
       if (b<d) printf("%d", a);
       else printf("%d", b);
   }else printf ("%d", c);
   }else {
       if (a==d || c==d){
           if (b<c) printf("%d", b);
           else printf("%d", c);
       } else printf("%d", d);
   }
   printf ("\n");
   return 0;

}