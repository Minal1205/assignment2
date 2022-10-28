#include<stdio.h>
//to check the given number is even or odd using bitwise operator
int main(){
    int x;
  printf("Enter Number\n");
  scanf("%d",&x);
  (x&1==1)?printf("number is odd"):printf("number is even");
    
    return 0;
}