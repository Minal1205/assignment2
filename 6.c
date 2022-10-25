#include <stdio.h>
// to print ASCII value of given character
int main()
{
    char ch;
    printf("Enter Character\n");
    scanf("%c", &ch);
    printf("ASCII value of %c = %d",ch, ch);
    return 0;
}