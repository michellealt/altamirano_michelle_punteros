#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num=5, a;
    int *x; 
    x = &num;
    a = *x; 
    printf("%p %d\n",x,a);

    return 0;
}