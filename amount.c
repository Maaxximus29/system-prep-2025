#include <stdio.h>

int main(void)
{
    int amount;

    printf("Please enter the amount in dollars: ");
    scanf("%d/n", &amount);

    int dollar20 = amount/20;

    int sum = 20 * dollar20;

    printf("$20 bills : %d\n", dollar20);

    int dollar10 = (amount - sum)/10;

    printf("$10 bills : %d\n", dollar10);
    //sum of all 10 dollar bills
    int sum1 = 10 * dollar10; 

    int dollar5 = (amount - sum - sum1)/5;

    printf("$5 bills: %d\n", dollar5);

    int sum2 = 5 * dollar5;
    
    int dollar = amount - sum - sum1 -sum2;

    printf("$1 bills : %d\n", dollar);
}