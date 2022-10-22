#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p;
    p = &i;
    printf("i = %d\n", i);
    printf("p = %d\n", p);
    printf("&i = %d\n", &i);
    printf("*p = %d\n", *p);
    *p = 20;
    printf("i = %d\n", i);
    return 0;
}