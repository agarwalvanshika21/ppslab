#include <stdio.h>

int main() {

    float temperatureInCelsius, temperatureInFahrenheit;

    // Prompt the user to enter the temperature in Celsius

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperatureInCelsius);

    // Convert Celsius to Fahrenheit using the formula

    temperatureInFahrenheit = (temperatureInCelsius * 9 / 5) + 32 ;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temperatureInCelsius, temperatureInFahrenheit);

    return 0;
}