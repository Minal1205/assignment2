#include<stdio.h>
//to print unit digit of program
int main(){
    int x,unit;
    printf("Enter Number\n");
    scanf("%d",&x);
    unit=x%10;
    printf("Unit digit of %d is %d\n",x,unit);

    return 0;
}