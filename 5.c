#include<stdio.h>
//input three digit number and print sum of its digits
int main(){
    int x,y,z,a,sum;
    printf("Enter Number\n");
    scanf("%d",&x);
    y=x/100;
    z=x/10%10;
    a=x%10;
    sum=y+z+a;
    printf("sum=%d",sum);



    return 0;
}