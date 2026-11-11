#include <stdio.h>
//function prototype
float calculateFare(float distance);

int main()
{
   float distance, total;
   
   printf("Enter distance travelled, in kilometers(km): \t");
   scanf("%f", &distance);
   
   total = calculateFare(distance);
   
   printf("\n_________________________________\n");
   printf("\nTotal fare: Ksh %.2f", total);
   printf("\n_________________________________\n");
   
return 0;
}
//function definition
float calculateFare(float distance)
{
   float fare;
     fare = distance * 50;

return fare;
}