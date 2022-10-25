#include <stdio.h>

int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    num = num / 10;
    num = num * 10;
    printf("Given number with last digit zero = \"%d\"", num);
    return 0;
}