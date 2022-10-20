#include <stdio.h>
void main()
{
    int k = 8;
    int x = 0 == 1 && k++;
    printf("% d % d\n", x, k);
}