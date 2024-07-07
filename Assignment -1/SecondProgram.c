#include <stdio.h>

int main(int argc, char const *argv[])
{
    // declaring variables inputCost, discountPercent
    float inputCost;
    int discountPercent;
    float discountedPrice;

    // asking for input
    printf("Enter the total bill amount: ");
    scanf("%f", &inputCost);

    // calculating discount
    if (inputCost > 10000)
    {
        discountPercent = 5;
    }
    else if (inputCost >= 5001 && inputCost <= 10000)
    {
        discountPercent = 10;
    }
    else if (inputCost >= 2001 && inputCost <= 5000)
    {
        discountPercent = 5;
    }
    else if (inputCost <= 2000)
    {
        discountPercent = 0;
    }

    discountedPrice = inputCost - (inputCost * discountPercent / 100);

    // printing the discounted price
    printf("\nPrice after discount %d%% = %.2f\n", discountPercent, discountedPrice);

    return 0;
}
