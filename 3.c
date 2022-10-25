#include<stdio.h>
//to swap value of two int variables
int main(){
    int x=9,y=16,swap;
    swap=x;
    x=y;
    y=swap;
    printf("x=%d y=%d",x,y);

    return 0;
}