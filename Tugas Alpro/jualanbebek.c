#include<stdio.h>
int main()
{
    int a, b, c, d;
    float x,y, hasilsum, hasil_1, hasil_2, hasil_3, hasil_4;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    scanf("%f %f",&x, &y);
    hasil_1=a*x;
    hasil_2=b*(x+y);
    hasil_3=c*(x+2*y);
    hasil_4=d*(x+3*y);
    hasilsum=hasil_1+hasil_2+hasil_3+hasil_4;
    printf("%.2f", hasilsum);
    return 0; 
}