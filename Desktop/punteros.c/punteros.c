#include <stdio.h>

int main()
{
    int num = 5, a;
    int *x;

    x = &num;
    a = *x;

    printf("%p %d\n", x, a);

    return 0;
}