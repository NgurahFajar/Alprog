#include <stdio.h>
int main()
{
    int N, A, B, hasil;
    scanf("%d %d %d", &N, &A, &B);
    hasil=(N/A)+(N/B)-(N/(A*B));
    printf("%d\n", hasil);
    return 0;
}