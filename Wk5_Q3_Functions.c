#include <stdio.h>

//function prototype
float convertToCelcius(float tempF);
int main()
{
    float tempF, final;

    printf("Enter temperature in Fahrenheit(F): \t");
    scanf("%f", &tempF);
//function call
   final = convertToCelcius(tempF);

   printf("\n_____________________________________________________\n");
   printf("\nTemperature: %.1f°C", final);
   printf("\n_____________________________________________________\n");

return 0;
}
//function definition
float convertToCelcius(float tempF)
{
   float celcius;
     celcius = (tempF - 32)*5/9;

return celcius;
}