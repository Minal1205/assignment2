#include <stdio.h>
//rotating  digit of a number towards one position right
int main()
{
    int x;
    printf("Enter Number\n");
    scanf("%d",&x);

    x=(x%10)*100+(x/10);
    printf("%d",x);
    return 0;
}