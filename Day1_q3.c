#include <stdio.h>

int main()
{
    printf("Conversion of Celsius to Fahrenheit");
    float celsius,fahrenheit;
    printf("\nEnter the temperature in Celsius");
    scanf("%f",&celsius);
    fahrenheit= (celsius*9/5)+32;
    printf("\nThe temperature in Fahrenheit:- %f",fahrenheit);

    return 0;
}


