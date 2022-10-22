#include <stdio.h>

int main(void)
{
    int x = 10;
    int *y = &x;
    
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("&x = %d\n", &x);
    printf("*y = %d\n", *y);

    printf("*x = %d\n", *x);
    printf("y = %d\n", &y);


    return 0;
}