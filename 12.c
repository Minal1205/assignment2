#include <stdio.h>
//rotating  digit of a number towards one position right
int main()
{
    int x , y, z, a,num;
    printf("Enter Number\n");
    scanf("%d",&x);

    y = x %10;
    z = y*100;
    a = x/10;
    num=z+a;
    printf("%d",num);
    return 0;
}