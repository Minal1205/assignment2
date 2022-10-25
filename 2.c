#include<stdio.h>
//to print number without its last digit
int main(){
    int x,num;
    printf("Enter Number\n");
    scanf("%d",&x);
    num=x/10;
    printf("%d without last digit is %d",x,num);


    return 0;
}