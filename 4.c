#include <stdio.h>
//swaping values without using third variable
int main()
{
    int x = 10, y = 9;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("x=%d,y=%d\n", x, y);

    return 0;
}