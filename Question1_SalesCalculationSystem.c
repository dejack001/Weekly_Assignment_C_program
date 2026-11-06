#include <stdio.h>
//function prototype
float calculateSubtotal(float cost1, float cost2, float cost3, float cost4, float cost5);
float calculateDiscount(float subtotal);
float calculateFinalAmount(float subtotal, float discount);

int main()
{
    float cost1, cost2, cost3, cost4, cost5;
    float subtotal, discount, final;

    printf("Enter the prices of five products \t");
    scanf("%f %f %f %f %f", &cost1, &cost2, &cost3, &cost4, &cost5);
//function call
    subtotal = calculateSubtotal(cost1, cost2, cost3, cost4, cost5);
    discount = calculateDiscount(subtotal);
    final = calculateFinalAmount(subtotal, discount);

    printf("\n________________________________________________\n");
    printf("\nSubtotal: Ksh %.2f", subtotal);
    printf("\nDiscount: Ksh %.2f", discount);
    printf("\nFinal Payable Amount: Ksh %.2f", final);
    printf("\n________________________________________________\n");

    return 0;
}
//function definition
float calculateSubtotal(float cost1, float cost2, float cost3, float cost4, float cost5)
{
   float total;
    total = cost1 + cost2 + cost3 + cost4 + cost5;

return total;
}

float calculateDiscount(float subtotal)
{
   float discount;
        if(subtotal >= 10000)
        {
           discount = subtotal * 0.1;
        }

        else if(subtotal >=5000 && subtotal <=9990)
        {
           discount = subtotal * 0.05;
        }

        else if(subtotal < 5000)
        {
           discount = 0;
        }
return discount;
}

float calculateFinalAmount(float subtotal, float discount)
{
  return subtotal + discount;
}