#include <stdio.h>
//function prototype
float calculateElectricBill(int unit);

int main()
{
   int unit;
   float total;

   printf("Enter Number Of Units Consumed: \t");
   scanf("%d", &unit);
//function call
   total = calculateElectricBill(unit);

   printf("\n_____________________________\n");
   printf("\nUnits Consumed: %d", unit);
   printf("\nTotal Bill: %.2f", total);
   printf("\n_____________________________\n");

return 0;
}
//function definition
float calculateElectricBill(int unit)
{
float bill;
   if(unit <=100){
     bill = unit * 10;}
   
   else if(unit >100 && bill <=200){
     bill = unit * 15;}
   
   else{
     bill = unit * 20;}

return bill;
}
    