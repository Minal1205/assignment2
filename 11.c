#include <stdio.h>
// to convert INR(Rupees) in USD(Dollar)
int main()
{
    float rupees, dollar;
    printf("Enter amount in Rupees\n ");
    scanf("%f", &rupees);

    dollar = rupees / 76.23;
    printf("%.2f rupees in USD is %.2f dollar\n", rupees, dollar);

    return 0;
}